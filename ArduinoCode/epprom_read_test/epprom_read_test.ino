/*
 * EEPROM Write
 *
 * Stores values read from analog input 0 into the EEPROM.
 * These values will stay in the EEPROM when the board is
 * turned off and may be retrieved later by another sketch.
 */

#include <EEPROM.h>

/** the current address in the EEPROM (i.e. which byte we're going to write to next) **/
//#define addr 10
int addr = 0;
//const int addr =0;
//int value = 100;

void setup() {
 Serial.begin(9600);
}

void loop() {


  /***
    Write the value to the appropriate byte of the EEPROM.
    these values will remain there when the board is
    turned off.
  ***/

  //EEPROM.write(addr, value);
     Serial.print(addr);
     Serial.print("\t");
    Serial.println( EEPROM.read(addr));
  /***
    Advance to the next address, when at the end restart at the beginning.

    Larger AVR processors have larger EEPROM sizes, E.g: 
    - Arduino Uno:        1kb EEPROM storage.
    Rather than hard-coding the length, you should use the pre-provided length function.
    This will make your code portable to all AVR processors.
  ***/
  addr +=1;

  if(addr==512){
    addr=0;
  
  }

  delay(300);
  


 
}
