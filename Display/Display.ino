#define DATA_PIN 11
#define LATCH_PIN 12
#define CLOCK_PIN 13

byte cube[64];
byte shifts[8];

void setup() {
  Serial.begin(9600);

  //Setting and clearing layers
  for(int i = 2; i < 10; i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }

  pinMode(DATA_PIN, OUTPUT);
  pinMode(LATCH_PIN, OUTPUT);
  pinMode(CLOCK_PIN, OUTPUT);

  digitalWrite(DATA_PIN, LOW);
  digitalWrite(LATCH_PIN, LOW);
  digitalWrite(CLOCK_PIN, LOW);
}

void setCube(){
  for(int i = 0; i < 64; i += 8){

    for(int j = 0; j < 8; j++){
      for(int k = 0; k < 8; k++){
        bitClear(shifts[j], k);
      } 
    }

    digitalWrite(LATCH_PIN, LOW);
    for(int l = 0; l < 8; l++){
      shiftOut(DATA_PIN, CLOCK_PIN, MSBFIRST, shifts[l]);
    }
    digitalWrite(LATCH_PIN, HIGH);
    
    for(int j = i; j < (i+8); j++){
      for(int k = 0; k < 8; k++){
        int bitValue = bitRead(cube[j], k);
        if(bitValue == 0){
          bitClear(shifts[j%8], k);
        }else{
          digitalWrite((i/8)+2, HIGH);
          bitSet(shifts[j%8], k);
        }
        
      }
    }
    
    digitalWrite(LATCH_PIN, LOW);
    for(int l = 0; l < 8; l++){
      shiftOut(DATA_PIN, CLOCK_PIN, MSBFIRST, shifts[l]);
    }
    digitalWrite(LATCH_PIN, HIGH);
  };
}

void loop() {
}

int bytesRead = 0;
void serialEvent() {
    cube[bytesRead] = (byte) Serial.read();
    if(bytesRead==63){
      bytesRead = 0;
      setCube();
    }else{
      bytesRead++;
    }
}

