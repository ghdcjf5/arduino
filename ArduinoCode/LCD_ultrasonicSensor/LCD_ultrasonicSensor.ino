#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float Volt;


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
  pinMode(8,OUTPUT);
  pinMode(9,INPUT);

}

void loop() {
  digitalWrite(8,HIGH);
  delayMicroseconds(10);
  digitalWrite(8,LOW);

  long duration = pulseIn(9,HIGH);
  if(duration == 0){return;}
  long distance = duration/58.2;

  lcd.clear();
  
  lcd.print("Distance:");
  lcd.setCursor(0,1);//(a,b)에서 a는 글자위치 b는 줄위치 여기서는 2째줄 첫번째칸으로 이동시키는것 
  
  lcd.print(distance);
  lcd.print(" cm");
 
  delay(500);
  
}
