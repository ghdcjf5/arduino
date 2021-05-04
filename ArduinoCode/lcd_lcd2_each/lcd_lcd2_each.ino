//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd2(0x26,16,2); 
void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.init();  
  lcd2.init();   
  lcd2.init();  // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd2.backlight();
  lcd.setCursor(0,0);
  lcd2.setCursor(0,0);

  
  // Print a message to the LCD.
  
  lcd.print("Hello, world!");
  lcd2.print("Hello, programer!");

 

}


void loop()
{
  lcd.scrollDisplayLeft();
  lcd2.scrollDisplayLeft();
   delay(500);
}
