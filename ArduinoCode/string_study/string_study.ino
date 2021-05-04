/*

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int A =1;
  double B[10] = {11,12,13,14,15,16,17,18,19,20};
  int C = 2;
  
  Serial.println("address of A :" +String(int(&A),HEX));
  for(int i =0; i<10; ++i){
    
    Serial.println("Address of B:" + String(int(&B[i]),HEX));  //int가 2byte여서 2씩 증가
    }
  Serial.println("Address of C:" + String(int(&C),HEX));
  while(1);
}
*/

/*
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int no[2][4];
  for(int i =0; i<2; ++i){
    for(int j =0; j<4; ++j){
      
      no[i][j] = i*4 +j;
        Serial.println("no[][]value is:" + String(i)+ String(j) +" " +String(int(&no[i][j])));
      }
 
  }

  Serial.println("2262 Data :" + String(*((int*)(2262+2)))); 
  Serial.println("2262 Data :" + String(*((int*)2262+2)));  //2262번지를 int로 바꿔라(casting)거기의 데이터
  while(1);
}

*/


/*
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int a = 10;

  Serial.println("A "  + String(*(&a))); //a의 주소의 데이터값 출력
 Serial.println("A "  + String(a));//같은 말이다
 
 while(1);
}


*/


/*
void print_result(float r);//c언어에서는 먼저 선언을 해줘야 함수를 쓸 수 있다.

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  float result;
  result = sin(30.0*3.14/180.0);
  print_result(result);
 
 while(1);
}

void print_result(float r){
  
  Serial.println("value " +String(r));
}
*/


/*

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char ch;
  char *pch;
  ch = 'A';
  pch = &ch;

  int ch1;
  int *pch1;
  ch1 = 'A';
  pch1 = &ch1;

  double ch2;
  double *pch2;
  ch2 = 'A';
  pch2 = &ch2;

 Serial.println("ch size  " +String(sizeof(ch)));
 Serial.println("pch size  " +String(sizeof(pch))); 
 Serial.println("*pch size  " +String(sizeof(*pch))); 
 Serial.println("ch1 size  " +String(sizeof(ch1))); 
 Serial.println("pch1 size  " +String(sizeof(pch1)));
 Serial.println("*pch1 size  " +String(sizeof(*pch1)));
 Serial.println("ch2 size  " +String(sizeof(ch2)));
 Serial.println("ph2 size  " +String(sizeof(pch2))); 
 Serial.println("*pch2 size  " +String(sizeof(*pch2))); 
  
 while(1);
}


*/


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void function1(int a){ 
  a = 0;
}

void function2(int *pa){
  *pa = 0;
}


void loop() {
  // put your main code here, to run repeatedly:
  int a= 3;
  function1(a);
  Serial.println(a);  //3
  function2(&a);  //pa에 a의 주소값이 저장된다.
  Serial.println(a);
  
 while(1);
}
//함수의 a와 loop문의 a는 다른것 함수a값이 바뀌어도 loop의 a는 바뀌지 않는다 복사된 것
