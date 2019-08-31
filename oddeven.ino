int led[4]={2,3,4,5};

void setup() 
{
  for(int i=3 ; i>=0 ; i--)
  {
    pinMode(led[i], OUTPUT);
  }

}

void loop()
{
  for(int i=0 ; i<4 ; i=i+2)
  {
    digitalWrite(led[i], HIGH);   
    delay(500); 
  
    digitalWrite(led[i], LOW);   
    delay(500); 
  }
  
  for(int i=1 ; i<4 ; i=i+2)
  {
    digitalWrite(led[i], HIGH);   
    delay(500); 
  
    digitalWrite(led[i], LOW);   
    delay(500); 
  }

}
