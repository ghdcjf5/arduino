#include <SoftwareSerial.h> 
#include <string.h>

SoftwareSerial BTSerial(6, 7);
float value=0;
int flag =100;
String str;
char inChar;
void setup() { 
  Serial.begin(9600); 
  BTSerial.begin(9600); 
  pinMode(A0,INPUT);
} 
void loop(){
   value = 5.0*analogRead(A0)/1023.0;
    
  if (BTSerial.available()){   //앱의 값을 아두이노로 전송
    char inChar = (char)BTSerial.read();
    if(inChar=='\r'||inChar=='\n'){
         flag = 1; //완료
      }
    else str += inChar;
  }
    if(flag ==1){
        if(str.equals("voltage")){
          if(value<=3.1&&value>=2.9){
             BTSerial.println(value);   
            }           
          else{
            BTSerial.print("readjust"); 
            BTSerial.println(""); 
            Serial.println(value);
            }
         str="";
         flag = 0;
        
        }
    }  
}



/*
 if (BTSerial.available()) //앱의 값을 아두이노로 전송
       Serial.write(BTSerial.read()); //serial모니터에 작성

    
  if (Serial.available())  //시리얼모니터 값을 앱으로 전송
       BTSerial.write(Serial.read()); //앱에 작성


*/
