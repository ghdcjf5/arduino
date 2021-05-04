//  FILE: PCF8574_test.ino
//  AUTHOR: Rob Tillaart
//  DATE: 7-febr-2013
//
//  PUPROSE: test PCF8574 library
 
/*
 *  edit by www.mAKE123.co.kr
 *  2016.10.19
 */
 
#include "PCF8574.h"
#include <Wire.h>
 
PCF8574 PCF_01(0x3F);     //객체 생성(I2C 주소 : 0x3F)
PCF8574 PCF_02(0x26);     //객체 생선(I2C 주소 : 0x27) //00100111
 
void setup()
{
  Serial.begin(9600);
  Serial.print("PCF8574_test version: ");
  Serial.println(PCF8574_LIB_VERSION);
  
  PCF_01.begin();
  PCF_02.begin();
}
 
void loop()
{
  
  PCF_01.write8(0xFF);       //1111 1111 //PCF_01에 0xFF 출력, LED 켜기
  PCF_02.write8(0xFF);
  delay(1000);
  
  PCF_01.write8(0x00);        //PCF_01에 0x00 출력, LED 끄기
  PCF_02.write8(0x00);
  delay(1000);

  

  
}
 
