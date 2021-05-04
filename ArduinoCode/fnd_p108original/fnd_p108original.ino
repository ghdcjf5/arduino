int digit[4] = {A0, A1, A2, A3};
int fnd[8] = {2,3,4,5,6,7,8,9};


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


int p0=0, p1=0, p2=0, p3=0,cnt=0;


void setup() {
  // put your setup code here, to run once:


  for(int i=0;i<4;i++){
    pinMode(digit[i],OUTPUT);
    }

 
  for(int j=0;j<8;j++){
      pinMode(fnd[j],OUTPUT);
      
     }
     // digitalWrite(9,HIGH);

  
}

void loop() {
  // put your main code here, to run repeatedly:



  digitalWrite(digit[0],LOW);
  digitalWrite(digit[1],LOW);
  digitalWrite(digit[2],LOW);
  digitalWrite(digit[3],HIGH);

  for(int pinout = 0;pinout<7;pinout++){
    
      digitalWrite(fnd[pinout],digits[p3][pinout]);
    }
  
   
    delay(5);
    

  digitalWrite(digit[0],LOW);
  digitalWrite(digit[1],LOW);
  digitalWrite(digit[2],HIGH);
  digitalWrite(digit[3],LOW);

  
     for(int pinout = 0;pinout<7;pinout++){
    
      digitalWrite(fnd[pinout],digits[p2][pinout]);
    }
  
    delay(5);
    

  digitalWrite(digit[0],LOW);
  digitalWrite(digit[1],HIGH);
  digitalWrite(digit[2],LOW);
  digitalWrite(digit[3],LOW);

   for(int pinout = 0;pinout<7;pinout++){
    
      digitalWrite(fnd[pinout],digits[p1][pinout]);
    }
    delay(5);
    

   digitalWrite(digit[0],HIGH);
  digitalWrite(digit[1],LOW);
  digitalWrite(digit[2],LOW);
  digitalWrite(digit[3],LOW);

  
   for(int pinout = 0;pinout<7;pinout++){
    
      digitalWrite(fnd[pinout],digits[p0][pinout]);
    }
    delay(5);
    
    
  cnt++;

  if(cnt==10){
    cnt =0;

    p0++;
    
    
    }

 if(p0==10){
    p0 =0;

    p1++;
    
    
    }

if(p1==10){
    p1 =0;

    p2++;
    
    
    }

if(p2==10){
    p2 =0;

    p3++;
    
    
    }
if(p3==10){
    p3 =0;

   
    
    
    }

}
