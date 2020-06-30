int numero=0;

void setup()
{
  Serial.begin(9600);
  Serial.println("Entre com um número a partir de 1:");
}

void loop()
{
  if(Serial.available()>0)
  {
  numero=Serial.parseInt();
    if(numero>1 && numero<10)
    {
      Serial.println("Numero entre 1 e 10");
      delay(2000);
      Serial.println("Entre com um número a partir de 1:");
    }
    else if(numero>=10 && numero<100)
    {
    Serial.println("Numero entre 10 e 100");
    delay(2000);
    Serial.println("Entre com um número a partir de 1:");
    }
    else if(numero!=0)
    {
    Serial.println("Numero fora da faixa");
    delay(2000);
    Serial.println("Entre com um número a partir de 1:");
    }
  }
}
