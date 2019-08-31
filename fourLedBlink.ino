int led[4]={2,3,4,5};

void setup() 
{
  for(int i=0 ; i<4 ; i++)
  {
    pinMode(led[i], OUTPUT);
  }

}

void loop()
{
  
  for(int k=0 ; k<4 ; k++)
  {
    digitalWrite(led[k], HIGH);   
    delay(1000); 
  
    digitalWrite(led[k], LOW);   
    delay(1000); 
  }

}
