char a = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("LED OFF");  
}

void loop()
{
 
  a = Serial.read();
  
  if( a == 'o'){
      Serial.println("LED ON");   
    }
  if(a == 'f'){
      Serial.println("LED OFF");   
    }
 }
