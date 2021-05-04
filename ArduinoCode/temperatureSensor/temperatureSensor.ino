
int reading;
int pin = A0;
float tmp;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(A0);
  tmp = 5*100.0*reading/1023;
  Serial.print(tmp);
  Serial.println("도");
  delay(1000);
}
