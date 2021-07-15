void setup()
{
  for(int i=9;i<=13;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  for(int i=9;i<=13;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
}