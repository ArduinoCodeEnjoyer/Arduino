int x[3] = {'A', 'B', 'c'};
char y[3] = {'A', 'B', 'c'};

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println((String)x[0] + "=" + (String)y[0]);
  Serial.println((String)x[1] + "=" + (String)y[1]);
  Serial.println((String)x[2] + "=" + (String)y[2]);
  delay(1000);
  Serial.println(y[0]);
  Serial.println(y[1]);
  Serial.println(y[2]);
}

void loop() {

}
