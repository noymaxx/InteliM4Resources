void setup()
{
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(11, HIGH);
  delay(850); 
  digitalWrite(11, LOW);
  delay(850); 
}