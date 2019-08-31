int led[4]={2,3,4,5};
int pin=12;

void setup() 
{
  for(int i=0 ; i<4 ; i++)
  {
    pinMode(led[i], OUTPUT);
  }
  pinMode(pin,INPUT);
}

void loop()
{
  if(digitalRead(pin)==HIGH)
  {
  for(int i=0 ; i<4 ; i++)
  {
    digitalWrite(led[i], HIGH);   
    delay(500); 
  
    digitalWrite(led[i], LOW);   
    delay(500); 
  }
  }
  else
  {
  for(int i=3 ; i>=0 ; i--)
  {
    digitalWrite(led[i], HIGH);   
    delay(500); 
  
    digitalWrite(led[i], LOW);   
    delay(500); 
  }
  }


}
