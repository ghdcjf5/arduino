#include <Wire.h>

int data[4][4] = 

{

   {0,0,0,1},

   {0,0,1,0},   

   {0,1,0,0},

   {1,0,0,0}

  

};

int pins[] = {10,11,12,13};

void setup() {

  pinMode(13,OUTPUT);

  pinMode(12,OUTPUT);

  pinMode(11,OUTPUT);

  pinMode(10,OUTPUT);

  

  Wire.begin(); // join i2c bus (address optional for master)

  for(int i=0 ; i < 4; ++i)

  {

    Wire.beginTransmission(0x23); // transmit to device 

    Wire.write(i);              // sends one byte

    Wire.endTransmission();    // stop transmitting

    delay(10);

    for(int j=0; j < 4; ++j)

    {

       digitalWrite(pins[j], data[i][j]);

       delay(10);

    }

    delay(100);

  }  

}

void loop() {

  

}
