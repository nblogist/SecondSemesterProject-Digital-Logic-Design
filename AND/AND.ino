void setup() {
  // put your setup code here, to run once:

pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(0,LOW);
digitalWrite(1,LOW);
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);

AND();
    
}

void AND()
{
   
          digitalWrite(0,LOW);
          digitalWrite(1,LOW);
          
           if (digitalRead(2)==LOW)
           {
               digitalWrite(0,LOW);
               digitalWrite(1,HIGH);
          
                if (digitalRead(2)==LOW)
                {
                    digitalWrite(0,HIGH);
                    digitalWrite(1,LOW);
          
                       if (digitalRead(2)==LOW)
                        {
                            digitalWrite(0,HIGH);
                            digitalWrite(1,HIGH);
          
                             if (digitalRead(2)==HIGH)
                               {
                                   digitalWrite(4,HIGH);
                                   digitalWrite(5,HIGH);
                                   delay(10000);
                                   loop();
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
          
          digitalWrite(0,LOW);
          digitalWrite(1,LOW);
          
           if (digitalRead(2)==LOW)
           {
               digitalWrite(0,LOW);
               digitalWrite(1,HIGH);
          
                if (digitalRead(2)==HIGH)
                {
                    digitalWrite(0,HIGH);
                    digitalWrite(1,LOW);
          
                       if (digitalRead(2)==HIGH)
                        {
                            digitalWrite(0,HIGH);
                            digitalWrite(1,HIGH);
          
                             if (digitalRead(2)==LOW)
                               {
                                   digitalWrite(3,HIGH);
                                   digitalWrite(4,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(6,HIGH);
                                   
                                  delay(10000);
                                  loop();
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
          
          digitalWrite(0,LOW);
          digitalWrite(1,LOW);
          
           if (digitalRead(2)==LOW)
           {
               digitalWrite(0,LOW);
               digitalWrite(1,HIGH);
          
                if (digitalRead(2)==HIGH)
                {
                    digitalWrite(0,HIGH);
                    digitalWrite(1,LOW);
          
                       if (digitalRead(2)==HIGH)
                        {
                            digitalWrite(0,HIGH);
                            digitalWrite(1,HIGH);
          
                             if (digitalRead(2)==HIGH)
                               {
                                  
                                   digitalWrite(3,HIGH);
                                   digitalWrite(4,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(5,HIGH);
                                   digitalWrite(6,HIGH);
                                   
                                  delay(10000);
                                  loop();
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
          
          digitalWrite(0,LOW);
          digitalWrite(1,LOW);
          
           if (digitalRead(2)==HIGH)
           {
               digitalWrite(0,LOW);
               digitalWrite(1,HIGH);
          
                if (digitalRead(2)==HIGH)
                {
                    digitalWrite(0,HIGH);
                    digitalWrite(1,LOW);
          
                       if (digitalRead(2)==HIGH)
                        {
                            digitalWrite(0,HIGH);
                            digitalWrite(1,HIGH);
          
                             if (digitalRead(2)==LOW)
                               {
                                  digitalWrite(8,HIGH);
                                  digitalWrite(9,HIGH);
                                  digitalWrite(4,HIGH);
                                  digitalWrite(5,HIGH);
                                  
                                   
                                   delay(10000);
                                   loop();
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
pinMode(0,OUTPUT);
pinMode(1,INPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT); 
          
          digitalWrite(0,LOW);
          digitalWrite(2,LOW);
          
           if (digitalRead(1)==HIGH)
           {
               digitalWrite(0,LOW);
               digitalWrite(2,HIGH);
          
                if (digitalRead(1)==LOW)
                {
                    digitalWrite(0,HIGH);
                    digitalWrite(2,LOW);
          
                       if (digitalRead(1)==LOW)
                        {
                            digitalWrite(0,HIGH);
                            digitalWrite(2,HIGH);
          
                              if (digitalRead(1)==LOW)
                               {
                                  
                                   digitalWrite(3,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(5,HIGH);
                                   digitalWrite(6,HIGH);
                                   
                                   delay(10000);
                                   loop();
                                }

                                 else
                                {
                                  D_FLIPfLOP();
                                  /*digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);delay(20000);*/
                                }
                        }
                         else
                                {
                                  D_FLIPfLOP();
                                /*digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);delay(20000);*/
                                }
                  }
                   else
                                {
                                  D_FLIPfLOP();
                              /* digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH);
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);delay(20000);*/
                                }
           }
else
{
  D_FLIPfLOP();
                                    /*digitalWrite(6,HIGH);
                                   digitalWrite(7,HIGH); 
                                   digitalWrite(8,HIGH);
                                   digitalWrite(9,HIGH);
                                   digitalWrite(10,HIGH);
                                   delay(20000);*/
}
    
}


void D_FLIPfLOP()
{
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(10,INPUT);
  digitalWrite(1,HIGH);
  delay(5);
  digitalWrite(2,LOW);
  delay(5);
  digitalWrite(0,HIGH);
  delay(5);
  digitalWrite(2,HIGH);
  if(digitalRead(10)==HIGH)
  {
    digitalWrite(2,LOW);
    delay(5);
    digitalWrite(0,LOW);
    delay(5);
    digitalWrite(2,HIGH);
    if(digitalRead(10)==LOW)
    {
      digitalWrite(3,HIGH);
      digitalWrite(8,HIGH);
      digitalWrite(9,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(5,HIGH);
      delay(10000);
      loop();
    }
  }
}











           


