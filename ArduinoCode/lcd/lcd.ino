#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);



void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2); //lcd가 16x2라서
  // Print a message to the LCD.
  lcd.print("hello, world!");


}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.noBlink();
  delay(3000);
  // Turn on the blinking cursor:
  lcd.blink();
  delay(3000);


}
