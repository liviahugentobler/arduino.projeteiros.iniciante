const int LED=2;
char valorLido='c';

void setup() {
Serial.begin(9600); //configura comunicação serial com 9600 bps
pinMode(LED,OUTPUT); //configura pino do led como saída
}

void loop() {
Serial.println("eu, a polly, e o be estamos blz");
if (Serial.available())
{
valorLido=Serial.read();
if(valorLido== 'b')
digitalWrite(LED,HIGH); //inverte estado do LED
if(valorLido== 'a')
digitalWrite(LED,LOW); //inverte estado do LED
}
}
