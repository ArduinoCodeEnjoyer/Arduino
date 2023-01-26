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
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(sw1) == LOW) {
    Forward();
  }
  else if (digitalRead(sw1) == HIGH) {
    Stop();
  }

  if (digitalRead(sw2) == LOW) {
    Backwards();
  }
  else if (digitalRead(sw2) == HIGH) {
    Stop();
  }
}
