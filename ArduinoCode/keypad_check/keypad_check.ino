int row[4] = {9,8,7,6};
int col[4] = {5,4,3,2};
int cnt =0;

char key[4][4] = {{'1','2','3','A'},
                 {'4','5','6','B'},
                 {'7','8','9','C'},
                 {'*','0','#','D'}};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for(int i = 0; i<4;i++){
     pinMode(col[i],INPUT_PULLUP);  //row or col을 하나는 input 하나는 output으로 해줘야한다.
     //각호실 내부풀업저항모드로 읽기 // 1이다.
  
 //  Serial.println( digitalRead(col[i]));  //초기에 1

    }
  for(int i=0;i<4;i++){
    
      pinMode(row[i],OUTPUT);
     digitalWrite(row[i],HIGH); // 각 행을 초기화로 잠금
     
    }
}

void loop() {
  // put your main code here, to run repeatedly:
 
  keypad();
 
 
}

void keypad(){

  char val = '\0';
  for(int i=0;i<4;i++){
      digitalWrite(row[i],LOW); // 해당 행 개방
    
    for(int k=0;k<4;k++){
      
   //   Serial.println( digitalRead(col[k]));
     
      if(!digitalRead(col[k])){ //초기에 1이었는데(input_pullup으로) 스위치를 눌러 digitalRead(col[k])==0 이 되면
     //    Serial.println( digitalRead(col[k]));  //0
         
        val = key[i][k]; //val 값에 키패드와 상응하는 문자를 저장하고
        }
      
       
    }

     digitalWrite(row[i],HIGH); //해당 행 잠금 안잠그면 for문을 돌면서 모든행이 다 켜져있는 상태여서 key[4][x]가 되는듯
  }

  if(val!='\0'){ //val 값에 키패드와 상응하는 문자를 저장되어 val값이 생겼으므로 
    Serial.println(val);
    delay(300);
    
    }
   
    
}
