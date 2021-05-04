int clm[8] ={A2,A3,A4,A5,2,3,4,5};
int row[8] = {6,7,8,9,10,11,12,13};
int num = 8;

byte pttn[2][8][8] =
             { {
               {0,0,0,1,1,0,0,0},
               {0,0,1,0,0,1,0,0},
               {0,1,0,0,0,0,1,0},
               {1,0,0,0,0,0,0,1},
               {1,1,1,1,1,1,1,1},
               {1,0,0,0,0,0,0,1},
               {1,0,0,0,0,0,0,1},
               {1,0,0,0,0,0,0,1}
               },
               
               {
               {1,1,1,1,1,1,1,0},
               {1,0,1,0,0,0,0,1},
               {1,1,0,0,0,0,0,1},
               {1,1,1,1,1,1,1,0},
               {1,1,1,1,1,1,1,0},
               {1,0,0,0,0,0,0,1},
               {1,0,0,0,0,0,0,1},
               {1,1,1,1,1,1,1,0}
                
                
                }
               
               
              } ;
  

void pttn_on(){
  for(int m=0;m<2;m++){
    for(int i=0;i<8;i++){
      
        for(int k=0;k<8;k++){
         
          
          digitalWrite(row[k],pttn[m][i][k]);
          digitalWrite(clm[i],pttn[m][i][k]);
        }
       clear();
       
    }
    delay(1000);
  clearAll();
    
  }
//  clear();
}


void setup() {
  // put your setup code here, to run once:
  for(int i = 0;i<num;i++){
      pinMode(clm[i],OUTPUT);
      pinMode(row[i],OUTPUT);
    }


}



void loop() {
  // put your main code here, to run repeatedly:

 
 
  pttn_on();
  //clear();
 


}

void clear(){
  
  for(int i=0;i<num;i++){
      digitalWrite(row[i],LOW);
      digitalWrite(clm[i],LOW);
    }
  
  
}

void clearAll(){
  
  for(int i=0;i<num;i++){
    for(int k=0;k<num;k++){
      
      digitalWrite(clm[k],LOW);
    }
    digitalWrite(row[i],LOW);
   }
  
  
}
