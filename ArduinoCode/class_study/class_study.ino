
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  String stringOne = "hello World"; //stringOne은 객체 ,string은 클래스
  stringOne.length();
  
  Serial.println(stringOne.substring(0,5)); //글자의 부분을 가져온다.(0부터 5개)
  Serial.println(stringOne.length());
 // stringOne = String(45,DEC); //string은 함수일거같다.
  while(1);
}


/*
void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
}

void loop() {
  String str1 = "0123";
  Serial.println(toIntstrl)
  while(1);
}


*/
