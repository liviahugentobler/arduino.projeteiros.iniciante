int LED_PRENSA_BRANCO=4;
int LED_PRENSA_AMARELO=5;
int LED_ESTEIRA=6;
int CHAVE=2;
int CHAVE_ONOFF=3;
int LDR=0;
int cont=0;

void setup()
    {
    pinMode(LED_PRENSA_BRANCO,OUTPUT);
    pinMode(LED_PRENSA_AMARELO,OUTPUT);
    pinMode(LED_ESTEIRA,OUTPUT);
    pinMode(CHAVE,INPUT_PULLUP);
    pinMode(CHAVE_ONOFF,INPUT_PULLUP);
    attachInterrupt(0,paraPrensa,LOW);
    Serial.begin(9600);
    }

void loop()
    {
    Serial.println(cont);
    if(digitalRead(CHAVE_ONOFF)==0)
    {
      if(analogRead(LDR)>950)
      {
       cont=cont+1;
       digitalWrite(LED_ESTEIRA,LOW);
       delay(1000);
      }
      else  
      digitalWrite(LED_ESTEIRA,HIGH);
      digitalWrite(LED_PRENSA_BRANCO,HIGH);
      digitalWrite(LED_PRENSA_AMARELO,LOW);
      delay(1000);
      digitalWrite(LED_PRENSA_BRANCO,LOW);
      digitalWrite(LED_PRENSA_AMARELO,HIGH);
      delay(1000);
    }
    else
    {
    digitalWrite(LED_PRENSA_BRANCO,LOW);
    digitalWrite(LED_PRENSA_AMARELO,LOW);
    digitalWrite(LED_ESTEIRA,LOW);
    }
    
    }

void paraPrensa()
  {
  digitalWrite(LED_PRENSA_BRANCO,LOW);
  digitalWrite(LED_PRENSA_AMARELO,LOW);
  }
