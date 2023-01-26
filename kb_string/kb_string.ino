String str = "CDTI \n";
String name1 = "Andaman Phewkliang";
int age = 16;
float gpa = 3.95;

void setup() {
  Serial.begin(9600);
  str += "Hello ";
  str += "World";

  Serial.println("Name:" + name1);
  Serial.println("Age:" + (String)age + " Years");
  Serial.println("GPA:" + String(gpa));
}

void loop() {
  Serial.println(str);
  delay(1000);
}
