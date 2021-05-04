int num =33;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("ASCII code START");

  delay(100);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print(num);

  Serial.print(" dec : ");
  Serial.print(num,DEC);

  Serial.print(" HEX : ");
  Serial.print(num,HEX);

  Serial.print(" OCT : ");
  Serial.print(num,OCT);

  Serial.print(" BIN : ");
  Serial.println(num,BIN);

  if(num == 126){
    
    while(1);
    }

  num++;

  delay(100);
  


  
}
