#define A 26
#define B 22
#define C 18
#define D 14
#define E 9
#define F 5
#define G 2
#define H 27
#define I 23
#define J 19
#define K 15
#define L 10
#define M 6
#define N 3
#define O 28
#define P 24
#define Q 20
#define R 16
#define S 11
#define T 7
#define U 4
#define V 29
#define W 25
#define X 21
#define Y 17
#define Z 12

#define ENTER 8

byte cube[64];

void setup() {
  pinMode(A, INPUT);
  pinMode(B, INPUT);
  pinMode(C, INPUT);
  pinMode(D, INPUT);
  pinMode(E, INPUT);
  pinMode(F, INPUT);
  pinMode(G, INPUT);
  pinMode(H, INPUT);
  pinMode(I, INPUT);
  pinMode(J, INPUT);
  pinMode(K, INPUT);
  pinMode(L, INPUT);
  pinMode(M, INPUT);
  pinMode(N, INPUT);
  pinMode(O, INPUT);
  pinMode(P, INPUT);
  pinMode(Q, INPUT);
  pinMode(R, INPUT);
  pinMode(S, INPUT);
  pinMode(T, INPUT);
  pinMode(U, INPUT);
  pinMode(V, INPUT);
  pinMode(W, INPUT);
  pinMode(X, INPUT);
  pinMode(Y, INPUT);
  pinMode(Z, INPUT);

  pinMode(ENTER, INPUT);
  
  Serial.begin(9600);
}

void clearCube(){
  for(int i = 0; i < 64; i++){
    cube[i] = 0b00000000;
  }
}

void printA(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00110011;
  cube[51] = 0b00110011;
  cube[52] = 0b00110011;
  cube[53] = 0b00110011;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00110011;
  cube[59] = 0b00110011;
  cube[60] = 0b00110011;
  cube[61] = 0b00110011;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printB(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11011011;
  cube[51] = 0b11011011;
  cube[52] = 0b11011011;
  cube[53] = 0b11011011;
  cube[54] = 0b01111110;
  cube[55] = 0b00111100;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11011011;
  cube[59] = 0b11011011;
  cube[60] = 0b11011011;
  cube[61] = 0b11011011;
  cube[62] = 0b01111110;
  cube[63] = 0b00111100;
}

void printC(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11000011;
  cube[51] = 0b11000011;
  cube[52] = 0b11000011;
  cube[53] = 0b11000011;
  cube[54] = 0b11000011;
  cube[55] = 0b11000011;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11000011;
  cube[59] = 0b11000011;
  cube[60] = 0b11000011;
  cube[61] = 0b11000011;
  cube[62] = 0b11000011;
  cube[63] = 0b11000011;
}

void printD(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11000011;
  cube[51] = 0b11000011;
  cube[52] = 0b01000010;
  cube[53] = 0b00100100;
  cube[54] = 0b00011000;
  cube[55] = 0b00011000;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11000011;
  cube[59] = 0b11000011;
  cube[60] = 0b01000010;
  cube[61] = 0b00100100;
  cube[62] = 0b00011000;
  cube[63] = 0b00011000;
}

void printE(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11011011;
  cube[51] = 0b11011011;
  cube[52] = 0b11011011;
  cube[53] = 0b11011011;
  cube[54] = 0b11011011;
  cube[55] = 0b11011011;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11011011;
  cube[59] = 0b11011011;
  cube[60] = 0b11011011;
  cube[61] = 0b11011011;
  cube[62] = 0b11011011;
  cube[63] = 0b11011011;
}

void printF(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00011011;
  cube[51] = 0b00011011;
  cube[52] = 0b00011011;
  cube[53] = 0b00011011;
  cube[54] = 0b00011011;
  cube[55] = 0b00011011;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00011011;
  cube[59] = 0b00011011;
  cube[60] = 0b00011011;
  cube[61] = 0b00011011;
  cube[62] = 0b00011011;
  cube[63] = 0b00011011;
}

void printG(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11000011;
  cube[51] = 0b11000011;
  cube[52] = 0b11011011;
  cube[53] = 0b11011011;
  cube[54] = 0b11111011;
  cube[55] = 0b11111011;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11000011;
  cube[59] = 0b11000011;
  cube[60] = 0b11011011;
  cube[61] = 0b11011011;
  cube[62] = 0b11111011;
  cube[63] = 0b11111011;
}

void printH(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00011000;
  cube[51] = 0b00011000;
  cube[52] = 0b00011000;
  cube[53] = 0b00011000;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00011000;
  cube[59] = 0b00011000;
  cube[60] = 0b00011000;
  cube[61] = 0b00011000;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printI(){
  cube[48] = 0b00000000;
  cube[49] = 0b00000000;
  cube[50] = 0b00000000;
  cube[51] = 0b11111111;
  cube[52] = 0b11111111;
  cube[53] = 0b00000000;
  cube[54] = 0b00000000;
  cube[55] = 0b00000000;
  
  cube[56] = 0b00000000;
  cube[57] = 0b00000000;
  cube[58] = 0b00000000;
  cube[59] = 0b11111111;
  cube[60] = 0b11111111;
  cube[61] = 0b00000000;
  cube[62] = 0b00000000;
  cube[63] = 0b00000000;
}

void printJ(){
  cube[48] = 0b11110000;
  cube[49] = 0b11110000;
  cube[50] = 0b11000000;
  cube[51] = 0b11000000;
  cube[52] = 0b11000000;
  cube[53] = 0b11000000;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11110000;
  cube[57] = 0b11110000;
  cube[58] = 0b11000000;
  cube[59] = 0b11000000;
  cube[60] = 0b11000000;
  cube[61] = 0b11000000;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printK(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00011000;
  cube[51] = 0b00111100;
  cube[52] = 0b01100110;
  cube[53] = 0b11000011;
  cube[54] = 0b10000001;
  cube[55] = 0b00000000;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00011000;
  cube[59] = 0b00111100;
  cube[60] = 0b01100110;
  cube[61] = 0b11000011;
  cube[62] = 0b10000001;
  cube[63] = 0b00000000;
}

void printL(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11000000;
  cube[51] = 0b11000000;
  cube[52] = 0b11000000;
  cube[53] = 0b11000000;
  cube[54] = 0b11000000;
  cube[55] = 0b11000000;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11000000;
  cube[59] = 0b11000000;
  cube[60] = 0b11000000;
  cube[61] = 0b11000000;
  cube[62] = 0b11000000;
  cube[63] = 0b11000000;
}

void printM(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00000110;
  cube[51] = 0b00011000;
  cube[52] = 0b00011000;
  cube[53] = 0b00000110;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00000110;
  cube[59] = 0b00011000;
  cube[60] = 0b00011000;
  cube[61] = 0b00000110;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printN(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00000011;
  cube[51] = 0b00001100;
  cube[52] = 0b00110000;
  cube[53] = 0b11000000;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00000011;
  cube[59] = 0b00001100;
  cube[60] = 0b00110000;
  cube[61] = 0b11000000;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printO(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11000011;
  cube[51] = 0b11000011;
  cube[52] = 0b11000011;
  cube[53] = 0b11000011;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11000011;
  cube[59] = 0b11000011;
  cube[60] = 0b11000011;
  cube[61] = 0b11000011;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printP(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00110011;
  cube[51] = 0b00110011;
  cube[52] = 0b00110011;
  cube[53] = 0b00110011;
  cube[54] = 0b00111111;
  cube[55] = 0b00111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00110011;
  cube[59] = 0b00110011;
  cube[60] = 0b00110011;
  cube[61] = 0b00110011;
  cube[62] = 0b00111111;
  cube[63] = 0b00111111;
}

void printQ(){
  cube[48] = 0b00111111;
  cube[49] = 0b00111111;
  cube[50] = 0b00110011;
  cube[51] = 0b00110011;
  cube[52] = 0b00110011;
  cube[53] = 0b00110011;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b00111111;
  cube[57] = 0b00111111;
  cube[58] = 0b00110011;
  cube[59] = 0b00110011;
  cube[60] = 0b00110011;
  cube[61] = 0b00110011;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printR(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b00110011;
  cube[51] = 0b00110011;
  cube[52] = 0b00110011;
  cube[53] = 0b01110011;
  cube[54] = 0b10111111;
  cube[55] = 0b00111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b00110011;
  cube[59] = 0b00110011;
  cube[60] = 0b00110011;
  cube[61] = 0b01110011;
  cube[62] = 0b10111111;
  cube[63] = 0b00111111;
}

void printS(){
  cube[48] = 0b11011111;
  cube[49] = 0b11011111;
  cube[50] = 0b11011011;
  cube[51] = 0b11011011;
  cube[52] = 0b11011011;
  cube[53] = 0b11011011;
  cube[54] = 0b11111011;
  cube[55] = 0b11111011;
  
  cube[56] = 0b11011111;
  cube[57] = 0b11011111;
  cube[58] = 0b11011011;
  cube[59] = 0b11011011;
  cube[60] = 0b11011011;
  cube[61] = 0b11011011;
  cube[62] = 0b11111011;
  cube[63] = 0b11111011;
}

void printT(){
  cube[48] = 0b00000011;
  cube[49] = 0b00000011;
  cube[50] = 0b00000011;
  cube[51] = 0b11111111;
  cube[52] = 0b11111111;
  cube[53] = 0b00000011;
  cube[54] = 0b00000011;
  cube[55] = 0b00000011;
  
  cube[56] = 0b00000011;
  cube[57] = 0b00000011;
  cube[58] = 0b00000011;
  cube[59] = 0b11111111;
  cube[60] = 0b11111111;
  cube[61] = 0b00000011;
  cube[62] = 0b00000011;
  cube[63] = 0b00000011;
}

void printU(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b11000000;
  cube[51] = 0b11000000;
  cube[52] = 0b11000000;
  cube[53] = 0b11000000;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b11000000;
  cube[59] = 0b11000000;
  cube[60] = 0b11000000;
  cube[61] = 0b11000000;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printV(){
  cube[48] = 0b00000011;
  cube[49] = 0b00001100;
  cube[50] = 0b00110000;
  cube[51] = 0b11000000;
  cube[52] = 0b11000000;
  cube[53] = 0b00110000;
  cube[54] = 0b00001100;
  cube[55] = 0b00000011;
  
  cube[56] = 0b00000011;
  cube[57] = 0b00001100;
  cube[58] = 0b00110000;
  cube[59] = 0b11000000;
  cube[60] = 0b11000000;
  cube[61] = 0b00110000;
  cube[62] = 0b00001100;
  cube[63] = 0b00000011;
}

void printW(){
  cube[48] = 0b11111111;
  cube[49] = 0b11111111;
  cube[50] = 0b01100000;
  cube[51] = 0b00011000;
  cube[52] = 0b00011000;
  cube[53] = 0b01100000;
  cube[54] = 0b11111111;
  cube[55] = 0b11111111;
  
  cube[56] = 0b11111111;
  cube[57] = 0b11111111;
  cube[58] = 0b01100000;
  cube[59] = 0b00011000;
  cube[60] = 0b00011000;
  cube[61] = 0b01100000;
  cube[62] = 0b11111111;
  cube[63] = 0b11111111;
}

void printX(){
  cube[48] = 0b11000011;
  cube[49] = 0b11000011;
  cube[50] = 0b01100110;
  cube[51] = 0b00111100;
  cube[52] = 0b00111100;
  cube[53] = 0b01100110;
  cube[54] = 0b11000011;
  cube[55] = 0b11000011;
  
  cube[56] = 0b11000011;
  cube[57] = 0b11000011;
  cube[58] = 0b01100110;
  cube[59] = 0b00111000;
  cube[60] = 0b00111000;
  cube[61] = 0b01100110;
  cube[62] = 0b11000011;
  cube[63] = 0b11000011;
}

void printY(){
  cube[48] = 0b00000011;
  cube[49] = 0b00000110;
  cube[50] = 0b00001100;
  cube[51] = 0b11111000;
  cube[52] = 0b11111000;
  cube[53] = 0b00001100;
  cube[54] = 0b00000110;
  cube[55] = 0b00000011;
  
  cube[56] = 0b00000011;
  cube[57] = 0b00000110;
  cube[58] = 0b00001100;
  cube[59] = 0b11111000;
  cube[60] = 0b11111000;
  cube[61] = 0b00001100;
  cube[62] = 0b00000110;
  cube[63] = 0b00000011;
}

void printZ(){
  cube[48] = 0b11000011;
  cube[49] = 0b11000111;
  cube[50] = 0b11001111;
  cube[51] = 0b11011011;
  cube[52] = 0b11011011;
  cube[53] = 0b11110011;
  cube[54] = 0b11100011;
  cube[55] = 0b11000011;
  
  cube[56] = 0b11000011;
  cube[57] = 0b11000111;
  cube[58] = 0b11001111;
  cube[59] = 0b11011011;
  cube[60] = 0b11011011;
  cube[61] = 0b11110011;
  cube[62] = 0b11100011;
  cube[63] = 0b11000011;
}

void loop() {
  if(digitalRead(ENTER) == 1){
//    clearCube();
//    printE();
//    for(int i = 0; i < 64; i++){
//      Serial.write(cube[i]);
//    }
//    delay(1000);
//
//    clearCube();
//    printL();
//    for(int i = 0; i < 64; i++){
//      Serial.write(cube[i]);
//    }
//    delay(1000);
//
//    clearCube();
//    printO();
//    for(int i = 0; i < 64; i++){
//      Serial.write(cube[i]);
//    }
//    delay(1000);
//
//    clearCube();
//    printI();
//    for(int i = 0; i < 64; i++){
//      Serial.write(cube[i]);
//    }
//    delay(1000);
//
//    clearCube();
//    printS();
//    for(int i = 0; i < 64; i++){
//      Serial.write(cube[i]);
//    }
//    delay(1000);
//
//    clearCube();
//    printA();
//    for(int i = 0; i < 64; i++){
//      Serial.write(cube[i]);
//    }
    delay(500);
  }

  if(digitalRead(A) == 1){
    clearCube();
    printA();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(B) == 1){
    clearCube();
    printB();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(C) == 1){
    clearCube();
    printC();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(D) == 1){
    clearCube();
    printD();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(E) == 1){
    clearCube();
    printE();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(F) == 1){
    clearCube();
    printF();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(G) == 1){
    clearCube();
    printG();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(H) == 1){
    clearCube();
    printH();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(I) == 1){
    clearCube();
    printI();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(J) == 1){
    clearCube();
    printJ();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(K) == 1){
    clearCube();
    printK();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(L) == 1){
    clearCube();
    printL();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(M) == 1){
    clearCube();
    printM();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(N) == 1){
    clearCube();
    printN();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(O) == 1){
    clearCube();
    printO();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(P) == 1){
    clearCube();
    printP();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(Q) == 1){
    clearCube();
    printQ();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(R) == 1){
    clearCube();
    printR();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(S) == 1){
    clearCube();
    printS();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(T) == 1){
    clearCube();
    printT();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(U) == 1){
    clearCube();
    printU();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(V) == 1){
    clearCube();
    printV();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(W) == 1){
    clearCube();
    printW();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(X) == 1){
    clearCube();
    printX();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(Y) == 1){
    clearCube();
    printY();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
  if(digitalRead(Z) == 1){
    clearCube();
    printZ();
    for(int i = 0; i < 64; i++){
      Serial.write(cube[i]);
    }
    delay(500);
  }
}
