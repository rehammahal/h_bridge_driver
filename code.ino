
  int In1 = 7;
  int In2 = 8;
  int In3 = 12;
  int In4 = 13;
  int ENA = 5;
  int ENB = 6;
  int SPEED = 350;
  

void setup() {
  pinMode(In1,OUTPUT);
  pinMode(In2,OUTPUT);
  pinMode(ENA,OUTPUT);
  pinMode(In3,OUTPUT);
  pinMode(In4,OUTPUT);
  pinMode(ENB,OUTPUT);
}


void loop() {
  digitalWrite(In1,HIGH);
  digitalWrite(In2,LOW);

  analogWrite(ENA,SPEED);
  delay(2000);


  digitalWrite(In3,HIGH);
  digitalWrite(In4,LOW);

  analogWrite(ENB,SPEED);
  delay(2000);
}
