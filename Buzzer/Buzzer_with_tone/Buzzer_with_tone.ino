void setup(){
  pinMode(3,OUTPUT);//13 represents buzzer connection.
}
void loop(){
  tone(3,100);//tone is a built-in function for setting frequency of signal
  delay(10000);//we give a pause for 1 second noTone(13); 
  noTone(3);//noTone will make the stop the frequency
  delay(10000);
}
