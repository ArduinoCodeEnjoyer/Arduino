int iot = 12;
int ntp = 15;
int Wifi = 2;

void setup() {
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);
  pinMode(Wifi, OUTPUT);
  digitalWrite(Wifi, LOW);
  delay(wifiblink(100));
}

void loop() {
  iotBlink();
  ntpBlink(500, 100);

  digitalWrite(Wifi, LOW);
  delay(wifiblink(100));
  digitalWrite(Wifi, HIGH);
  delay(wifiblink(10));
}
