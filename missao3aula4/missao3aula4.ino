int LDR=0;
int LED=3;
int val=0;

void setup()
{
Serial.begin(9600);
pinMode(LED, OUTPUT);
}

void loop()
{
val=analogRead(LDR);
Serial.println(val);
val=val-320; //no lugar de 130, é o valor que fica melhor para você
if(val>255) val=255;
if(val<0) val=0; analogWrite(LED,val);
}
