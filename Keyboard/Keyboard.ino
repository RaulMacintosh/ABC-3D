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

void loop() {
  if(digitalRead(ENTER) == 1){
    Serial.println("");
    delay(500);
  }

  if(digitalRead(A) == 1){
    Serial.print("A");
    delay(500);
  }
  if(digitalRead(B) == 1){
    Serial.print("B");
    delay(500);
  }
  if(digitalRead(C) == 1){
    Serial.print("C");
    delay(500);
  }
  if(digitalRead(D) == 1){
    Serial.print("D");
    delay(500);
  }
  if(digitalRead(E) == 1){
    Serial.print("E");
    delay(500);
  }
  if(digitalRead(F) == 1){
    Serial.print("F");
    delay(500);
  }
  if(digitalRead(G) == 1){
    Serial.print("G");
    delay(500);
  }
  if(digitalRead(H) == 1){
    Serial.print("H");
    delay(500);
  }
  if(digitalRead(I) == 1){
    Serial.print("I");
    delay(500);
  }
  if(digitalRead(J) == 1){
    Serial.print("J");
    delay(500);
  }
  if(digitalRead(K) == 1){
    Serial.print("K");
    delay(500);
  }
  if(digitalRead(L) == 1){
    Serial.print("L");
    delay(500);
  }
  if(digitalRead(M) == 1){
    Serial.print("M");
    delay(500);
  }
  if(digitalRead(N) == 1){
    Serial.print("N");
    delay(500);
  }
  if(digitalRead(O) == 1){
    Serial.print("O");
    delay(500);
  }
  if(digitalRead(P) == 1){
    Serial.print("P");
    delay(500);
  }
  if(digitalRead(Q) == 1){
    Serial.print("Q");
    delay(500);
  }
  if(digitalRead(R) == 1){
    Serial.print("R");
    delay(500);
  }
  if(digitalRead(S) == 1){
    Serial.print("S");
    delay(500);
  }
  if(digitalRead(T) == 1){
    Serial.print("T");
    delay(500);
  }
  if(digitalRead(U) == 1){
    Serial.print("U");
    delay(500);
  }
  if(digitalRead(V) == 1){
    Serial.print("V");
    delay(500);
  }
  if(digitalRead(W) == 1){
    Serial.print("W");
    delay(500);
  }
  if(digitalRead(X) == 1){
    Serial.print("X");
    delay(500);
  }
  if(digitalRead(Y) == 1){
    Serial.print("Y");
    delay(500);
  }
  if(digitalRead(Z) == 1){
    Serial.print("Z");
    delay(500);
  }
}
