const int Rled = 11;
const int Gled = 10;
const int Bled = 9;

const int R_SW = 4;
const int G_SW = 3;
const int B_SW = 2;

int R_state;
int G_state;
int B_state;

int R_PWM = 0;
int G_PWM = 0;
int B_PWM = 0;
int Bcnt = 0;

void setup()
{
  
  pinMode(R_SW,INPUT);
  pinMode(G_SW,INPUT);
  pinMode(B_SW,INPUT);
  
  pinMode(Rled, OUTPUT);
  pinMode(Gled, OUTPUT);
  pinMode(Bled, OUTPUT);
}

void loop()
{
  R_state = digitalRead(R_SW);
  G_state = digitalRead(G_SW);
  B_state = digitalRead(B_SW);
  
  if(R_state == 1){
        ++R_PWM;
    if(R_PWM > 255){
        R_PWM = 0;
    }
  }
  
  
  if(G_state == 1){
        ++G_PWM;
    if(G_PWM > 255){
        G_PWM = 0;
    }
  }
  //R과 G는 (1, 2번째) 카운트 초과시 0으로 초기화
   if(B_state == 1){
      ++Bcnt;



    
    if(Bcnt > 0 && Bcnt <256)
        ++B_PWM;
    else if(Bcnt >= 256 && Bcnt <511)
        --B_PWM;


/* 
if(Bcnt <256)
        ++B_PWM;
    else if(Bcnt <511)
        --B_PWM;

*/
//관계연산자를 사용하지 않아도 된다.




    else
        Bcnt = 0;
    }
 
  //B는(3번째) 카운트초과시 다시감소하여 0으로 수렴
  //cnt가 올라가다가 255를 넘으면 감소하고 0이되면 다시증가하고를 구현
 //Bsubcnt의 숫자범위를 잘 설정해야 오류가 없다.
  
  analogWrite(Rled,R_PWM);
  analogWrite(Gled,G_PWM);
  analogWrite(Bled,B_PWM);
  delay(10);
  
  
  
}
