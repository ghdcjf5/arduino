#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float Volt;


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");


}

void loop() {
 
  int sensorValue = analogRead(A0);
  Volt = (float)5.0 * sensorValue/1023; //캐스팅 연산자 사용,
  //데이터변환시 손실을 방지
  lcd.clear();
  lcd.print("VR:");
  lcd.print(Volt);
  delay(500);
  
}
