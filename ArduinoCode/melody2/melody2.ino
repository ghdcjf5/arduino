int pins[] = {2,3,4};
int notes[] = {262, 294, 330};//loop문을 만들기위해 배열로 만듦

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
 for(int i = 0; i < 3;i++){
    pinMode(pins[i],INPUT);  //2, 3, 4pin input으로 배열로 만든것
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i = 0; i < 3; i++){
    if(digitalRead(pins[i]) == HIGH){
      tone(8, notes[i], 100);
      delay(100);
      noTone(8);
      }

    
    }
}
