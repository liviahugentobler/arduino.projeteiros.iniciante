int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;
int LDR=0;
int val=0;


void setup()
{
   pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
   Serial.begin(9600);
}

void loop()
{ 
   val= analogRead(LDR)-190;
   Serial.println(val);

   if (val<8)
   {
   digitalWrite(LED1,LOW);
   digitalWrite(LED2,LOW);
   digitalWrite(LED3,LOW);
   digitalWrite(LED4,LOW);
  }
      else if (val>=8 && val<10)
      {
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,LOW);
        digitalWrite(LED3,LOW);
        digitalWrite(LED4,LOW);
       }
       else if (val>=10 && val<19)
       {
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,LOW);
        digitalWrite(LED4,LOW);
       }
        else if (val>=20 && val<23)
       {
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED4,LOW);
       }
        else if (val>=24)
       {
        digitalWrite(LED1,HIGH);
        digitalWrite(LED2,HIGH);
        digitalWrite(LED3,HIGH);
        digitalWrite(LED4,HIGH);
       }
}
