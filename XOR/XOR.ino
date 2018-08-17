void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
    if(digitalRead(2)==HIGH)
    {
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          
           if (digitalRead(5)==LOW)
           {
               delay(250);
               digitalWrite(3,LOW);
               digitalWrite(4,HIGH);
          
                if (digitalRead(5)==HIGH)
                {
                   delay(250);
                    digitalWrite(3,HIGH);
                    digitalWrite(4,LOW);
          
                       if (digitalRead(5)==HIGH)
                        {
                          delay(250);
                            digitalWrite(3,HIGH);
                            digitalWrite(4,HIGH);
          
                             if (digitalRead(5)==LOW)
                               {
                                  delay(250);
                                   digitalWrite(6,HIGH);
                                   delay(5000);
                                }

                                 else
                                {
                                digitalWrite(7,HIGH);
                                delay(5000);
                                }
                        }
                  }
           }
           
    }
    /*XOR ENDS HERE!!*/
else
{
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  delay(5000);
}
    
}
