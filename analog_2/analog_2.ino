#include <analogWrite.h>
int ntp = 15;
int ldr = 36;
void setup() {
  Serial.begin(9600);
  pinMode(ntp, OUTPUT);
  pinMode(ldr, INPUT);
}

void loop() {
  int val = map(analogRead(ldr)0,1024,0,255);
  analogWrite(ntp,val);
  Serial.println(val)
}
