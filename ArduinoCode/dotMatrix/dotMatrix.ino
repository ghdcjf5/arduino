int clm[8] ={A2,A3,A4,A5,2,3,4,5};
int row[8] = {6,7,8,9,10,11,12,13};
int num = 8;


void setup() {
  // put your setup code here, to run once:
  for(int i = 0;i<num;i++){
      pinMode(clm[i],OUTPUT);
      pinMode(row[i],OUTPUT);
    }


}



void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0;i<num;i++){
      for(int j=0;j<num;j++){
          clear();

          digitalWrite(row[i],HIGH);
          digitalWrite(clm[j],HIGH); //col을 gnd
          delay(300);
        }
    
    
    }




}

void clear(){
  
  for(int i=0;i<num;i++){
      digitalWrite(row[i],LOW);
      digitalWrite(clm[i],LOW);
    }
  
  
}
