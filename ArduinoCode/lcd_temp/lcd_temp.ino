#include <LiquidCrystal.h>


int reading;
int pin = A0;
float tmp;

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);




void setup() {
  
  // put your setup code here, to run once:
  
  Serial.begin(9600);
  lcd.begin(16, 2);

  
  // Print a message to the LCD.
 // lcd.print("hello, world! ");
  
  

}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(A0);
  tmp = 5*100.0*reading/1023;
  lcd.print(tmp);
  Serial.print(tmp);
  Serial.println("도");
  delay(500);
  
 // lcd.noBlink();
 // delay(500);
  //** Turn on the blinking cursor:
  lcd.blink();
  delay(500);

  lcd.clear();
}
