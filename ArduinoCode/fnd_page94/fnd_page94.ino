//0~9까지 1초간격으로 반복
int digits[10][7]={ 
  // a b c d e f g
    {0,0,0,0,0,0,1},  //0
    {1,0,0,1,1,1,1},  //1
    {0,0,1,0,0,1,0},  //2
    {0,0,0,0,1,1,0},  //3
    {1,0,0,1,1,0,0},  //4
    {0,1,0,0,1,0,0},  //5
    {0,1,0,0,0,0,0},  //6
    {0,0,0,1,1,1,1},  //7
    {0,0,0,0,0,0,0},  //8
    {0,0,0,0,1,0,0}   //9

  };



void setup() {
  // put your setup code here, to run once:
 
  for(int i=0;i<10;i++){
      pinMode(i,OUTPUT);
      
     }
      digitalWrite(9,HIGH);
   
  /*
  pinMode(9,OUTPUT); //.
  pinMode(8,OUTPUT);//g
  pinMode(7,OUTPUT);//f
  pinMode(6,OUTPUT);//e
  pinMode(5,OUTPUT);//d
  pinMode(4,OUTPUT);//c
  pinMode(3,OUTPUT);//b
  pinMode(2,OUTPUT);//a
*/


  


  
}

void loop() {
  // put your main code here, to run repeatedly:
 
  
  /*
  digitalWrite(9,HIGH);//.은 OFF
  
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(8,HIGH);
*/
  for(int i=0;i<10;i++){
    
    
    seg(i);
    delay(1000);
    }




}



void seg(int num){
  int pin=2;
  for(int i=0;i<7;i++){
    
    digitalWrite(pin+i,digits[num][i]);
    
    }
  
  
  }
