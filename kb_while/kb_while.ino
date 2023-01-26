//int iot = 12;
int LED[] = {12,15,2,17};

void setup() {
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
}

void loop() {
  int x = 0;
  /*do {
    digitalWrite(iot, LOW);
    delay(500);
    digitalWrite(iot, HIGH);
    delay(500);
    x++;
    while (x < 10)
    }*/
  while(x<4){
    digitalWrite(LED[x], LOW);
    delay(50);
    digitalWrite(LED[x], HIGH);
    delay(50);
    x++;
  }
}
