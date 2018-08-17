

int switchstate = 0;

void setup()
{
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  switchstate = 0;
switchstate = digitalRead(2);
if (switchstate == 0)
{
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
}
else
{
  
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(6,LOW);

}



}


