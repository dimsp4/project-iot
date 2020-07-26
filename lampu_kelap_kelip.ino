void setup() {
  pinMode  (16, OUTPUT);
  pinMode  (4, OUTPUT);

}

void loop() {
   digitalWrite (16, LOW);
   digitalWrite (4, LOW);
   delay(500);
   digitalWrite (16, HIGH);
   digitalWrite (4, HIGH);
   delay(1000);

}
