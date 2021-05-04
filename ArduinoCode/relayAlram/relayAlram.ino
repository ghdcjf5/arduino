int pinState = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(13,INPUT);
pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  pinState = digitalRead(13);
  if(pinState == LOW){
    digitalWrite(12, HIGH);
  }
  else
    digitalWrite(12, LOW);


}
