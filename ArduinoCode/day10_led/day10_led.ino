int led =13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);

pinMode(led-1,OUTPUT);


}
//void는 반환값이 없다는 것이다. 입력값도 없고 출력값도 없고 처리하는 동작값만 있다.
void loop() {
  // put your main code here, to run repeatedly:

hello(led);


}

void hello(int led2){
  
digitalWrite(led2, HIGH);
delay(1000);
digitalWrite(led2, LOW);
delay(1000);

  }
