const int  buttonPin = 2;   
const int ledPin = 13;       
int buttonPushCounter = 0;   
int buttonState = 0;         
int lastButtonState = 0;     

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      buttonPushCounter++;
    }  
    // delay로 약간의 디바운스
    delay(50);
  }
  lastButtonState = buttonState;
  //현재상태와 과거상태를 저장하기 위해서

//초기 cnt=0 이므로 꺼짐 버튼 누를때 cnt=1 켜짐 또 버튼 누를때 cnt =2 꺼짐(반복)
  if (buttonPushCounter % 2 == 0) {
     digitalWrite(ledPin, LOW);
  } 
  else {
   digitalWrite(ledPin, HIGH);
  }
}
