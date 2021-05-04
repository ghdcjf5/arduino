long ms1;
long ms2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 delay(1000);
  ms1 = millis(); //<- millis는 호출하지 않아도 이미 돌아가고 있는중 딜레이가 들어가도 millis는 1초
 
 Serial.println(ms1);
  delay(2000);  //delay동안 millis는 1000 + 2000이됨 delay동안의 값이 돌아가네
//코드상에서 line은 멈추지만 millis는 계속 돌아가는중
  //for(long i = 0; i < 500; ++i) {Serial.print("/");}
  ms2 = millis();  //ms2에 millis는 3000임
 
 Serial.println(ms1);
  Serial.println(ms2);

  while(1);
}
