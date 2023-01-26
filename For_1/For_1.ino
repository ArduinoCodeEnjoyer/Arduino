int IOT = 12;

void setup() {
  Serial.begin(9600);
  pinMode(IOT, OUTPUT);
  for (int i = 1; i <= 20; i++) {
    digitalWrite(IOT, LOW);
    delay(500);
    digitalWrite(IOT, HIGH);
    delay(500);
    Serial.println(i);
  }
}

void loop() {}
