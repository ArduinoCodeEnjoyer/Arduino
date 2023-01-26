int LEDiot = 12;
int LEDntp = 15;

int sw1 = 16;
int sw2 = 14;

char key;

void setup(){
  pinMode(LEDiot, OUTPUT);
  pinMode(LEDntp, OUTPUT);
  pinMode(sw1, INPUT);
  pinMode(sw2, INPUT);
  Serial.begin(9600);
}

void loop(){
  //nt iotON = digitalRead(sw1);
  //nt ntpON = digitalRead(sw2);

  key = Serial.read();
  Serial.println(key);
  delay(10);
  
  switch(key){
    case 'a': digitalWrite(LEDiot, LOW);
    Serial.println("IOT on");
    delay(5000);
    break;
    case 'b': digitalWrite(LEDntp, LOW);
    delay(5000);
    Serial.println("NTP on");
    break;
    default: 
      digitalWrite(LEDntp, HIGH);
      digitalWrite(LEDiot, HIGH);
      Serial.println("All off");
  }
}
