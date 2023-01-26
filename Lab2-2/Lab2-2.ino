int led[4] = {17, 2, 15, 12};

void setup() {
  pinMode(led[0],OUTPUT); 
  pinMode(led[1],OUTPUT); 
  pinMode(led[2],OUTPUT); 
  pinMode(led[3],OUTPUT); 
}
 
void loop() {
  digitalWrite(led[0], HIGH);
  delay(75);
  digitalWrite(led[1], HIGH);
  delay(75);
  digitalWrite(led[2], HIGH);
  delay(75);
  digitalWrite(led[3], HIGH);
  delay(300);
  digitalWrite(led[0], LOW);
  delay(75);
  digitalWrite(led[1], LOW);
  delay(75);
  digitalWrite(led[2], LOW);
  delay(75);
  digitalWrite(led[3], LOW);
  delay(300);
}
