#include <Wire.h>

PCF8574::PCF8574(const unit8_t deviceAddress){
  
  _address = deviceAddress;
  _dataIn = 0;
  _dataOut = 0xFF;
  _buttonMask = 0xFF;
  _error = PCF8574_ok;
  
  
  }






void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
