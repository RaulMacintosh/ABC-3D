#define DATA_PIN 11
#define LATCH_PIN 12
#define CLOCK_PIN 13

byte cube[64];
byte shifts[8];

void setup() {

  printU();

//  cube[0] = 170;
//  cube[8] = 24;
//  cube[16] = 170;
//  cube[24] = 24;
//  cube[32] = 170;
//  cube[40] = 24;
//  cube[48] = 170;
//  cube[56] = 24;
//
//  cube[1] = 170;
//  cube[9] = 24;
//  cube[17] = 170;
//  cube[25] = 24;
//  cube[33] = 170;
//  cube[41] = 24;
//  cube[49] = 170;
//  cube[57] = 24;
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

void printU(){
  cube[0] = 3;
  cube[1] = 3;
  cube[2] = 3;
  cube[3] = 3;
  cube[4] = 3;
  cube[5] = 3;
  cube[6] = 3;
  cube[7] = 3;
  
  cube[8] = 3;
  cube[9] = 3;
  cube[10] = 3;
  cube[11] = 3;
  cube[12] = 3;
  cube[13] = 3;
  cube[14] = 3;
  cube[15] = 3;
  
  cube[16] = 3;
  cube[17] = 3;
  cube[22] = 3;
  cube[23] = 3;
  
  cube[24] = 3;
  cube[25] = 3;
  cube[30] = 3;
  cube[31] = 3;
  
  cube[32] = 3;
  cube[33] = 3;
  cube[38] = 3;
  cube[39] = 3;
  
  cube[40] = 3;
  cube[41] = 3;
  cube[46] = 3;
  cube[47] = 3;
  
  cube[48] = 3;
  cube[49] = 3;
  cube[54] = 3;
  cube[55] = 3;
  
  cube[56] = 3;
  cube[57] = 3;
  cube[62] = 3;
  cube[63] = 3;
}

//int count = 0;
void loop() {

//  cube[count/8] = 255;
//
//  count++;
//  if(count == 512){
//    count = 0;
//  }

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

    //delay(500);
    if(i > 0){
      digitalWrite(((i-8)/8)+2, LOW);
    }else{
      digitalWrite((7)+2, LOW);
    }
    //delay(500);
  }
}

int bytesRead = 0;
void serialEvent() {
    cube[bytesRead] = (byte) Serial.read();
    if(bytesRead==63){
      bytesRead = 0;
    }else{
      bytesRead++;
    }
}

