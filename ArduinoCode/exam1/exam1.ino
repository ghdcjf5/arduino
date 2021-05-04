/*

int buttonState = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(11, OUTPUT);
  pinMode(2, INPUT);
}

void loop()
{
  buttonState = digitalRead(2);
 
  if(buttonState == 1){
  
    digitalWrite(11,HIGH);
   
   Serial.println(buttonState);
  }
  else{
    digitalWrite(11,LOW);
  
     Serial.println(buttonState);
    
  }
  
  
}


*/

char a = 0;

void setup()
{
  Serial.begin(9600);
  Serial.println("LED OFF");  
}

void loop()
{
 
  a = Serial.read();
  
  if( a=='o'){
      Serial.println("LED ON");   
    }
  if(a=='f'){
       Serial.println("LED OFF");   
    }
 
 
}
