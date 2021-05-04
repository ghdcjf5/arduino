#include <SoftwareSerial.h> 
#include <string.h>

SoftwareSerial BTSerial(6, 7);
//bluetooth module Tx:Digital 2 Rx:Digital 3 

void setup() 
{ 
  Serial.begin(38400); 
  BTSerial.begin(38400); 
  //pinMode(A0,INPUT);
} 
void loop()
{
  
  
  if (BTSerial.available()) //앱의 값을 아두이노로 전송
       Serial.write(BTSerial.read()); //serial모니터에 작성

    
  if (Serial.available())  //시리얼모니터 값을 앱으로 전송
       BTSerial.write(Serial.read()); //앱에 작성

      
}
