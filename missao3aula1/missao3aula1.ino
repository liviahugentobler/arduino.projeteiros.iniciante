int LDR=0;
int LED=2;
int Val=0;


void setup()
{
   Serial.begin(9600);
   pinMode(LED, OUTPUT);
}


void loop()
{
  Val=analogRead(LDR);
  Serial.println(Val);
  if (Val>950) // está escuro
     digitalWrite(LED, HIGH);
   else 
    digitalWrite(LED, LOW);
    
}
