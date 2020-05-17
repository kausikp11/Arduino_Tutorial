void setup() {
  //for analogWrite use only PWM pins and initialization is not must
}
void loop() {
  //PWM for RED
  for (int i = 0; i <= 255; i++) {
    analogWrite(3, i);
    delay(100);
  }
  analogWrite(3, 0); //Making RED pin to zero(off state)
  //PWM for BLUE
  for (int i = 0; i <= 255; i++) {
    analogWrite(6, i);
    delay(100);
  }
  analogWrite(6, 0); //Making BLUE pin to zero(off state)
  //PWM for GREEN
  for (int i = 0; i <= 255; i++) {
    analogWrite(5, i);
    delay(100);
  }
  analogWrite(5, 0);//Making GREEN pin to zero(off state)
}
