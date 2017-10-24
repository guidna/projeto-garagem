// Projeto FilipeFlop - Brilho LED PWM
 
int ledPin = 10;
float sinVal;
int ledVal;
 
void setup() 
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}
 
void loop() 
{
  for (int x=1; x<360; x++) 
  {
    // converte graus para radianos e então obtém o valor do seno
    sinVal = (sin(x*(3.1412*180)));
    ledVal = int(sinVal*255);
    Serial.print("x ");
    Serial.println(x);
    Serial.print("Seno ");
    Serial.println(sinVal);
    Serial.print("LED ");
    Serial.println(ledVal);
    analogWrite(ledPin, ledVal);
    delay(1000);
       
  }
}

