void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(Serial.available()){

    char ch = Serial.read();

    if(ch == '0'){

      digitalWrite(13,HIGH);
      Serial.print("Turn on led");
    }

    if(ch == '1'){
      
      digitalWrite(13,LOW);  
      Serial.print("Turn off led");
    }
      
      
  }










    
    

}
