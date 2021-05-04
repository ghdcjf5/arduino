String inputString = ""; // String이라는 클래스에서 inputString이라는 객체를 생성한다.
boolean stringComplete = false;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
inputString.reserve(200); //200 byte 확보
}

void loop() {
  // put your main code here, to run repeatedly:

  if(stringComplete){
    Serial.println(inputString);
    inputString = "";
    stringComplete = false; 
    }


}

void serialEvent(){
  
  while(Serial.available()){
    //get the new byte:
    char inChar = (char)Serial.read();
    //add it to the inputString:
    inputString += inChar;
    //if the incoming charater is a new line, set a flag so the
    if(inChar == ' '){  //space를 눌러야 출력된다.
      stringComplete = true;
      
      }
  
  }
}
