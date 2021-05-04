
int pin = 13;
volatile int state = LOW; //인터럽트로 쓰기위해 volatile로 사용

void setup() {
  // put your setup code here, to run once:


  pinMode(pin,OUTPUT);
  attachInterrupt(0, blink, CHANGE);  //rising, falling 둘다 인터럽트 걸릴때 이용하겠다.
}
//CHANGE, RISING, FALLING 다 된다.

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(pin, state);


}
void blink(){
  
// state != state; 
 state = (!state); 
  
 }
