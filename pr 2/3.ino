
void setup() {
  analogWriteRange(25000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int chototo = analogRead(A0);
  int chototo_2 = map(chototo, 0, 1023, 0, 25000);
  analogWrite(D0, chototo_2);
  analogWrite(D1, chototo_2);
}
