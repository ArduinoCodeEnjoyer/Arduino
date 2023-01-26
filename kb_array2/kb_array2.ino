int x[3][4] = { {5, 10, 15, 20} ,
  {25, 30, 35, 40},
  {45, 50, 55, 60}
};

void setup() {
  Serial.begin(9600);
  delay(1000);
  Serial.println(x[1][2]);
  Serial.println(x[2][3]);
  for (int i = 0; i < 3; i++ ) {
    for (int j = 0; j < 4; j++) {
       delay(500);
       Serial.print((String)x[i][j]+ "\t");
    }
    Serial.println();
  }
}

void loop() {

}
