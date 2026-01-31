#define ledpin 8
#define buttonpin 7
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200); 
  pinMode(ledpin, OUTPUT); 
  pinMode(buttonpin, INPUT);
  digitalWrite(ledpin, LOW); 
}

void loop() {
  // put your main code here, to run repeatedly:
  int in=digitalRead(buttonpin);

  if(in==HIGH)
  {
    digitalWrite(ledpin, HIGH);
    Serial.println("Led is on"); 
    delay(1000); 
    digitalWrite(ledpin, LOW); 
    Serial.println("Led is off");
    delay(1500);
  }
  else
  {
  digitalWrite(ledpin, LOW); 
  Serial.println("Led is off");
  }
}
