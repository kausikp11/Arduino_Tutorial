int a=1;
int b=2;
int c=3;
int d=4;
int e=5;
int f=6;
int g=7;
int dp=8;
void off(){
  for(int i=1;i<=8;i++){
    digitalWrite(i,HIGH);
  }
}
void setup()
{
  for(int i=1;i<=8;i++){
  pinMode(i, OUTPUT);
  }
}

void loop()
{
  off();
  one();
  delay(1000);
  off();
  two();
  delay(1000);
  off();
  three();
  delay(1000);
  off();
  four();
  delay(1000);
  off();
  five();
  delay(1000);
  off();
  six();
  delay(1000);
  off();
  seven();
  delay(1000);
  off();
  eight();
  delay(1000);
  off();
  nine();
  dot();
  delay(1000);
}
void one(){
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}
void two(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(g,LOW);
}
void three(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(g,LOW);
}
void four(){
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void five(){
  digitalWrite(a,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void six(){
  digitalWrite(a,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void seven(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
}
void eight(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void nine(){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
void dot(){
  digitalWrite(dp,LOW);
}
