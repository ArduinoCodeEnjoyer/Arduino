#include <analogWrite.h>

int iot = 12;
void setup() {
  Serial.begin(9600);
  pinMode(iot, OUTPUT);
}

void loop() {
  for(int i = 255;i > 0;i--){
    analogWrite(iot, i);
    delay(1);
    Serial.println(i);
  }
}
