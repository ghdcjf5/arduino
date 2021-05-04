#include <Wire.h>


void setup() {
  // put your setup code here, to run once:
  Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  Wire.beginTransmission(0x26);
  Wire.write(0xff);
  Wire.endTransmission();
  delay(500);
  Wire.beginTransmission(0x26);
  Wire.write(0x00);
  Wire.endTransmission();
  delay(500);



}
