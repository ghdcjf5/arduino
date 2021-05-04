void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int a =0;
  static int b = 0;
  a =a +1;
  b = b+1;

  Serial.println("a = "+ String(a));
  Serial.println("b = "+ String(b));

delay(500);

}
