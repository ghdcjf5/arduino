#include <Wire.h>


void setup() {
  // put your setup code here, to run once:
  Wire.begin();
  Serial.begin(9600);
  Wire.beginTransmission(0x26);
  Wire.write(0xff);
  Wire.endTransmission();

  
}

void loop() {
  // put your main code here, to run repeatedly:
  Wire.requestFrom(0x26,1);
  while (Wire.available()){
     uint8_t data = Wire.read();
     Serial.println(data,HEX);

    
    }

  delay(300);




  
}
