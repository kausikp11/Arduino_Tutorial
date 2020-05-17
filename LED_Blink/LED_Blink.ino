void setup()
{
  //initialize the pins and variables
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);//we are giving pin and output state as on
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(7, LOW);//we are giving pin and output state as off
  delay(1000); // Wait for 1000 millisecond(s)
}
