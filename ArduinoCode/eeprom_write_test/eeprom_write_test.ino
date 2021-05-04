/*
 * EEPROM Write
 *
 * Stores values read from analog input 0 into the EEPROM.
 * These values will stay in the EEPROM when the board is
 * turned off and may be retrieved later by another sketch.
 */

#include <EEPROM.h>

//EEPROM의 처음 시작할 주소 지정
int addr = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  //아날로그 데이터는 1부터 1023까지 받을 수 있지만
  //EEPROM은 255까지 밖에 못받기 때문에 / 4를 한다
  int val = analogRead(0) / 4;
  Serial.print(addr);
  Serial.print("\t");
  Serial.println(val);
  
  //EEPROM에 아날로그 0번핀에서 받는 값을 입력한다
  //이 값들은 전원이 나가도 저장된다
  EEPROM.write(addr, val);
  
  //주소를 1씩 증가시켜 다음 주소를 가져온다
  //주소가 512가 되면 다시 0부터 시작한다
  addr = addr + 1;
  if (addr == 512)
    addr = 0;
  
  delay(1000);
}
