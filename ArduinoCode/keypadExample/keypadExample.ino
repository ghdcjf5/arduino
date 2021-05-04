const byte rows = 4; //4 rows
const byte cols = 4; //4 columns

byte rowPins[rows] = {9,8,7,6};
byte colPins[cols] = {5,4,3,2};

 char keys[rows][cols] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

void setup(){
  Serial.begin(9600);
  
  for(int i=0;i<rows;i++){
    pinMode(rowPins[i], OUTPUT);
    digitalWrite(rowPins[i], HIGH);   // 각층 초기화로 잠금
  }
  for(int i=0;i<cols;i++){
    pinMode(colPins[i], INPUT_PULLUP); //각호실 내부풀업저항모드로 읽기
    
  }  
}

void loop(){
  
  char val = '\0';
 
  for(int y=0;y<rows;y++){
    digitalWrite(rowPins[y], LOW);   //해당층 개방
    for(int x=0;x<cols;x++){     
        if(!digitalRead(colPins[x]))val = keys[y][x];
    }        
    digitalWrite(rowPins[y], HIGH);  //해당층 잠금
  
  }

 if(val!='\0'){
    Serial.println(val);
   delay(300);
 }      
}
