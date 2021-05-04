void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int a = 0;
  a = a + 1;
  Serial.println(a);
  a++;
  Serial.println(a);
  ++a;
  Serial.println(a);
  delay(1000);

}
