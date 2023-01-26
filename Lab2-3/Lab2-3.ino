#define led1 17
#define led2 2
const int led3 = 15;
const int led4 = 12;

void setup() {
  pinMode(led1,OUTPUT); 
  pinMode(led2,OUTPUT); 
  pinMode(led3,OUTPUT); 
  pinMode(led4,OUTPUT);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
}
 
void loop() {
  Blink();
  Blink();
  Blink();
  Blink();
  Water_Drop();
  Water_Drop();
  Water_Drop();
  Water_Drop();
  Water_fall();
  Water_fall();
  Water_fall();
  Water_fall();
}

void Blink() {
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(300);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  delay(300);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(300);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(300);
}

void Water_Drop() {
  digitalWrite(led1, LOW);
  delay(50);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  delay(50);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  delay(50);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  delay(300);
}

void Water_fall() {
  digitalWrite(led1, HIGH);
  delay(75);
  digitalWrite(led2, HIGH);
  delay(75);
  digitalWrite(led3, HIGH);
  delay(75);
  digitalWrite(led4, HIGH);
  delay(300);
  digitalWrite(led1, LOW);
  delay(75);
  digitalWrite(led2, LOW);
  delay(75);
  digitalWrite(led3, LOW);
  delay(75);
  digitalWrite(led4, LOW);
  delay(300);
}
