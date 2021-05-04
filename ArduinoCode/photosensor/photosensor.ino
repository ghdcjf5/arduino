int sensorPin = A0;
int ledpin = 9;
int sensorValue = 0;
int ledLight =0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
 // ledLight =map(sensorValue,0,1023,255,0);//범위값을 축소시킨다.
  Serial.println(ledLight);
  digitalWrite(ledpin,HIGH);
  delay(sensorValue);
  digitalWrite(ledpin,LOW);
  delay(sensorValue);
  /*
  analogWrite(ledpin,ledLight);
  delay(10);
  */
}
