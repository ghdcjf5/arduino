#include <SoftwareSerial.h> 
#include <string.h>

SoftwareSerial BTSerial(6, 7);
int flag =100;
String str;
char inChar;
void setup() { 
  Serial.begin(9600); 
  BTSerial.begin(9600); 
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
} 
void loop(){
  if (BTSerial.available()){   //앱의 값을 아두이노로 전송
    char inChar = (char)BTSerial.read();
    if(inChar=='\r'||inChar=='\n'){
         flag = 1; //완료
      }
    else str += inChar;
  }
    if(flag ==1){
        if(str.equals("ledoff")) {
            digitalWrite(2,LOW);
            digitalWrite(3,LOW);
        }
         if(str.equals("ledon")) {
            digitalWrite(2,HIGH);
            digitalWrite(3,HIGH);
        }
         if(str.equals("ledoff2")) digitalWrite(2,LOW);
         if(str.equals("ledoff3")) digitalWrite(3,LOW);
         if(str.equals("ledon2")) digitalWrite(2,HIGH);
         if(str.equals("ledon3")) digitalWrite(3,HIGH); 
         str="";
         flag = 0;
    }  
}
