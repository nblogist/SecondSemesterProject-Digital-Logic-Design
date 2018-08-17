void setup() {
  // put your setup code here, to run once:
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
AND();
    
}

void AND()
{
   
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          
           if (digitalRead(5)==LOW)
           {
               digitalWrite(3,LOW);
               digitalWrite(4,HIGH);
          
                if (digitalRead(5)==LOW)
                {
                    digitalWrite(3,HIGH);
                    digitalWrite(4,LOW);
          
                       if (digitalRead(5)==LOW)
                        {
                            digitalWrite(3,HIGH);
                            digitalWrite(4,HIGH);
          
                             if (digitalRead(5)==HIGH)
                               {
                                   digitalWrite(6,LOW);
                                   digitalWrite(7,LOW);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);
                                   
                                   delay(20000);
                                }

                                 else
                                {
                                XOR();
                                }
                        }
                         else
                                {
                                XOR();
                                }
                  }
                   else
                                {
                               XOR();
                                }
           }
else
{
  XOR();
}
    
}


void XOR()
{
          
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          
           if (digitalRead(5)==LOW)
           {
               digitalWrite(3,LOW);
               digitalWrite(4,HIGH);
          
                if (digitalRead(5)==HIGH)
                {
                    digitalWrite(3,HIGH);
                    digitalWrite(4,LOW);
          
                       if (digitalRead(5)==HIGH)
                        {
                            digitalWrite(3,HIGH);
                            digitalWrite(4,HIGH);
          
                             if (digitalRead(5)==LOW)
                               {
                                   digitalWrite(6,LOW);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,LOW);
                                   digitalWrite(9,LOW);
                                   digitalWrite(10,HIGH);
                                   
                                  delay(20000);
                                }

                                 else
                                {
                                OR();
                                }
                        }
                         else
                                {
                                OR();
                                }
                  }
                   else
                                {
                               OR();
                                }
           }
else
{
  OR();
}
    
}






void OR()
{
          
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          
           if (digitalRead(5)==LOW)
           {
               digitalWrite(3,LOW);
               digitalWrite(4,HIGH);
          
                if (digitalRead(5)==HIGH)
                {
                    digitalWrite(3,HIGH);
                    digitalWrite(4,LOW);
          
                       if (digitalRead(5)==HIGH)
                        {
                            digitalWrite(3,HIGH);
                            digitalWrite(4,HIGH);
          
                             if (digitalRead(5)==HIGH)
                               {
                                   digitalWrite(6,LOW);
                                   digitalWrite(7,LOW);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,LOW);
                                   digitalWrite(10,LOW);
                                   
                                  delay(20000);
                                }

                                 else
                                {
                                NAND();
                                }
                        }
                         else
                                {
                                NAND();
                                }
                  }
                   else
                                {
                               NAND();
                                }
           }
else
{
  NAND();
}
    
}


void NAND()
{
          
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          
           if (digitalRead(5)==HIGH)
           {
               digitalWrite(3,LOW);
               digitalWrite(4,HIGH);
          
                if (digitalRead(5)==HIGH)
                {
                    digitalWrite(3,HIGH);
                    digitalWrite(4,LOW);
          
                       if (digitalRead(5)==HIGH)
                        {
                            digitalWrite(3,HIGH);
                            digitalWrite(4,HIGH);
          
                             if (digitalRead(5)==LOW)
                               {
                                   digitalWrite(6,LOW);
                                   digitalWrite(7,LOW);
                                   digitalWrite(8,LOW);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,LOW);
                                   
                                   delay(20000);
                                }

                                 else
                                {
                                NOR();
                                }
                        }
                         else
                                {
                                NOR();
                                }
                  }
                   else
                                {
                               NOR();
                                }
           }
else
{
  NOR();
}
    
}





void NOR()
{
          
          digitalWrite(3,LOW);
          digitalWrite(4,LOW);
          
           if (digitalRead(5)==HIGH)
           {
               digitalWrite(3,LOW);
               digitalWrite(4,HIGH);
          
                if (digitalRead(5)==LOW)
                {
                    digitalWrite(3,HIGH);
                    digitalWrite(4,LOW);
          
                       if (digitalRead(5)==LOW)
                        {
                            digitalWrite(3,HIGH);
                            digitalWrite(4,HIGH);
          
                             if (digitalRead(5)==LOW)
                               {
                                   digitalWrite(6,LOW);
                                   digitalWrite(7,LOW);
                                   digitalWrite(8,LOW);
                                   digitalWrite(9,LOW);
                                   digitalWrite(10,HIGH);
                                   
                                   delay(20000);
                                }

                                 else
                                {
                                  digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);delay(20000);
                                }
                        }
                         else
                                {
                                digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);delay(20000);
                                }
                  }
                   else
                                {
                               digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);delay(20000);
                                }
           }
else
{
 digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);
                                   delay(20000);
}
    
}











           


