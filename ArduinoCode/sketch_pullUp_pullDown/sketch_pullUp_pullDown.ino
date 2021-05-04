int pullDownButtonState = 0;
int pullUpButtonState = 0;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
 pinMode(6, INPUT);
 pinMode(5, INPUT);
 pinMode(13, OUTPUT);
 pinMode(12, OUTPUT);
 Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 pullDownButtonState = digitalRead(6);   //0값 들어감
 pullUpButtonState = digitalRead(5);  //pullup이라 기본이 vcc출력값이 걸리니까
                                      //read도 state가 1 다만 digitalWrite구문을 거쳐야 led가 작동
                                     
  Serial.print("digitalRead6pin : ");
  Serial.print(digitalRead(6));
  Serial.print("   digitalRead5pin : ");
  Serial.print(digitalRead(5));
  Serial.print("//////");
// delay(1000);
//digitalRead 초기값을 덤핑치는 코드(checking)
  
 if(pullDownButtonState == 1 && pullUpButtonState == 0){
    digitalWrite(13, HIGH);   
    digitalWrite(12, HIGH); 
  }  
  else if(pullDownButtonState == 0 && pullUpButtonState == 1){    // up 켜짐
   digitalWrite(13, LOW); 
    digitalWrite(12, LOW); 
    }
  else if(pullDownButtonState == 1 && pullUpButtonState == 1){    // up 켜짐
   digitalWrite(13, HIGH); 
    digitalWrite(12, LOW);   
  }
 else{
    digitalWrite(13, LOW);  // 1일때 꺼지는지 확인
    digitalWrite(12, HIGH);
  }


 
}
