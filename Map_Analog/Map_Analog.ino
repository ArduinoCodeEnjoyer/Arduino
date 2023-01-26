#include <analogWrite.h>
int bt = 17;
int wifi = 2;
int ntp = 15;
int iot = 12;
int ldr = 36;
void setup() {
  Serial.begin(9600);
  pinMode(ntp, OUTPUT);
  pinMode(ldr, INPUT);
  pinMode(wifi, OUTPUT);
  pinMode(bt, OUTPUT);
  pinMode(iot, OUTPUT);
  digitalWrite(iot, HIGH);
  digitalWrite(ntp, HIGH);
  digitalWrite(bt, HIGH);
  digitalWrite(wifi, HIGH);
}

void loop() {
  int val = map(analogRead(ldr), 0, 1024, 1, 10);
  if (val >= 6) {
    digitalWrite(bt, LOW);
  }
  else if (val >= 5) {
    digitalWrite(wifi, LOW);
    digitalWrite(bt, HIGH);
  }
  else if (val >= 4) {
    digitalWrite(ntp, LOW);
    digitalWrite(wifi, HIGH);
  }
  else if (val >= 3) {
    digitalWrite(iot, LOW);
    digitalWrite(ntp, HIGH);
  }
  else if (val <= 2) {
    digitalWrite(iot, HIGH);
    digitalWrite(ntp, HIGH);
    digitalWrite(bt, HIGH);
    digitalWrite(wifi, HIGH);
  }
  //Serial.println(val);
}
