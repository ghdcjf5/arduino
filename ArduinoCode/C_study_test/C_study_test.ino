
/*
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int a =0;
  static int b = 0;  //static은 프로그램 종료전까지 계속 저장된다.
  a =a +1;
  b = b+1;

  Serial.println("a = "+ String(a));
  Serial.println("b = "+ String(b));

delay(500);

}

*/

/*

void setup(){

  Serial.begin(9600);
  }


void loop(){
  
  const int A = 10;

  A=A+1;

  delay(1000);
  
  
  }

*/


/*
void setup(){

  Serial.begin(9600);
  }


void loop(){
  
  unsigned char a;
  char b = 145;
  a= 0b11010000;
  a = (a|0b00000001);
  Serial.println(a,BIN); //BIN은 binary로 보여달라 한거 hex, dec이런거랑 같은거
  Serial.println(String(b,HEX));  //char가 문자인지 숫자인지 판단을 해주기위해서 String으로 문자취급
  Serial.println(String(a,BIN));
  a = (a|(0b00000001<<2));
  Serial.println(a,BIN);
  while(1);
  }
//and를 쓰면 그자리만 지울수있고
//or을 쓰면 그자리만 쓸 수 있다.

*/

//정수값 a 6번째 bit를 점검하세요


/*
void setup(){

  Serial.begin(9600);
  }


void loop(){
  
  char a = 0b00101111;
  char b = 0b00100000; //check 변수

  if((a&b)==0b00100000){

    Serial.println("a's 6th bit is 1");
    
    }
  else{
     Serial.println("a's 6th bit is 0");
    }  
  //Serial.println(String(a&(0b00100000),BIN));

  

  
  while(1);
  }

  */


/*
  void setup(){

  Serial.begin(9600);
  }


void loop(){
  
  int a =10;
  int b;

  b= a++;
  Serial.println(b);
  a =10;
  b= ++a;
  Serial.println(b);

  
  while(1);
  }


  */

/*
 void setup(){

  Serial.begin(9600);
  }


void loop(){
  
  int a =10;
  int b =20;

  if(true){
    Serial.println(a);
    }

  else{
     Serial.println(b);
    }
 
  while(1);
  }

*/


/*
 void setup(){

  Serial.begin(9600);
  }


void loop(){
  
 int a =10; //01010
 int b =20; //10100
 
  switch(a){
    case 10: Serial.println(a);
    break; //실행하고 case10으로 넘어가지 말고 넘어가라
    case 20: Serial.println(b);
    break;
    default: Serial.println("not found");
    }
 
  while(1);
  }


*/
 void setup(){

  Serial.begin(9600);
  }


void loop(){
  
int count = 0, sum = 0;


  do{
    count++;
    sum +=count;
  
   
    }

  while(count<10);

  Serial.println("SUM"+String(sum));
  while(1);
}
//1+2+...+10
