#include <Servo.h>

Servo servo_1;
int chtoto;
int chtoto_2;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  servo_1.attach(D0, 600, 2600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  chtoto = analogRead(A0);
  chtoto_2 = map(chtoto, 0, 1023, 0, 180);
  servo_1.write(chtoto_2);
}
