char a ,b,c ;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  a = '\0';
  b = '\r';
  c = '\n';
  Serial.print("HEX : " + String(a,HEX));
  Serial.print(" BIN : " + String(a,BIN));
  Serial.println(" DEC : " + String(a,DEC));
  Serial.print("HEX : " + String(b,HEX));
  Serial.print(" BIN : " + String(b,BIN));
  Serial.println(" DEC : " + String(b,DEC));
  Serial.print("HEX : " + String(c,HEX));
  Serial.print(" BIN : " + String(c,BIN));
  Serial.println(" DEC : " + String(c,DEC));
  
  while(1);
}
