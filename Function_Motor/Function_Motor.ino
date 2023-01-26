int RF = 17;
int RR = 2;
int LF = 15;
int LR = 12;
int sw1 = 16;
int sw2 = 14;

void setup() {
  pinMode(RF, OUTPUT);
  pinMode(RR, OUTPUT);
  pinMode(LF, OUTPUT);
  pinMode(LR, OUTPUT);
}

void loop() {
  Forward();
  delay(2500);
  Backwards();
  delay(2500);
  Left();
  delay(2500);
  Right();
  delay(2500);
  Stop();
  delay(2500);
}
