#define ledpin 8
#define buttonpin 7
int c=0;
void setup() 
{
  Serial.begin(115200);
  pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT);

  digitalWrite(ledpin,LOW);
}

void loop() 
{
  int in=digitalRead(buttonpin);
  if(in==HIGH)
  {
    c++;
    delay(250);
  }

  if(c%2!=0)
  {
    digitalWrite(ledpin, HIGH);
    Serial.println("LED ON");
    delay(1000);

    digitalWrite(ledpin,LOW);
    Serial.println("LED OFF");
    delay(1500);

  }

  else
  {
    digitalWrite(ledpin,LOW);
    Serial.println("Led is off");
  }
}