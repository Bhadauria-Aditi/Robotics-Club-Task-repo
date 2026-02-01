#define ledpin 8
#define buttonpin 7
bool flag=false;
int prev_state=LOW; 
int speed=1000;
void setup() 
{
  Serial.begin(115200);
  pinMode(ledpin,OUTPUT);
  pinMode(buttonpin,INPUT);

  digitalWrite(ledpin,LOW);
}

void loop() 
{
  int rn_state=digitalRead(buttonpin);
  if(rn_state==HIGH && prev_state==LOW)
  {
    //flag needs to be opposite of what it was
    if(flag==true)
    flag=false;
    else
    flag=true;

  }
  prev_state=rn_state;
  if(flag==true)
  {
    digitalWrite(ledpin, HIGH);
    Serial.println("LED ON");
    delay(speed);
    digitalWrite(ledpin,LOW);
    Serial.println("LED OFF");
    delay(speed);
  }
  else
  {
    digitalWrite(ledpin,LOW);
    Serial.println("BLINK OFF");
  }
  
}