#include <Wire.h>

  int num[9] = {0xff, 0xfe, 0xfd, 0xfb,0xf7, 0xef, 0xdf, 0xbf, 0x7f};
                     //1111 1111
                     //1111 1110 
                    //1111 1101
                    //1111 1011
                    //1111 0111
                    //1110 1111
                    //1101 1111
                    //1011 1111
                    //0111 1111
                    
void setup() {
  // put your setup code here, to run once:
  Wire.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i =0; i<9;i++){
  Wire.beginTransmission(0x26);
  Wire.write(num[i] );
  Wire.endTransmission();
  delay(500);
  }


}
