void ntpBlink(int value1, int value2) {
  digitalWrite(ntp, LOW);
  delay(value1);
  digitalWrite(ntp, HIGH);
  delay(value2);
}
