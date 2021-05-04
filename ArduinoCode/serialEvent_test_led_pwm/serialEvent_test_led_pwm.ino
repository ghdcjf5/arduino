/*
  Serial Event example

  When new serial data arrives, this sketch adds it to a String.
  When a newline is received, the loop prints the string and clears it.

  A good test for this is to try it with a GPS receiver that sends out
  NMEA 0183 sentences.

  NOTE: The serialEvent() feature is not available on the Leonardo, Micro, or
  other ATmega32U4 based boards.

  created 9 May 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/SerialEvent
*/
#define LedPin 11
String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete
String brightString = "";
String brightStringVal = "";


void setup() {
  // initialize serial:
  pinMode(LedPin,OUTPUT);
  Serial.begin(9600);
  // reserve 200 bytes for the inputString:
  inputString.reserve(200);
}

void loop() {
 //  a newline arrives:
  if (stringComplete) {

    brightString = inputString.substring(0,4);
    Serial.println(brightString);

      
    if(inputString.equals("LedOn")){
         digitalWrite(LedPin,HIGH);
       }
    else if(inputString.equals("LedOff")){
          digitalWrite(LedPin,LOW);
      }
    else if(brightString.equals("LED_")){
          
          brightStringVal = inputString.substring(4,7);//4부터 7까지 LED_128이면 01234567이니까 7바로 전까지 즉, 1개더 +
          //7-4는 3글자
          analogWrite(LedPin,brightStringVal.toInt());// 정수값으로 변환(string은 정수가 아니라서)
           Serial.println(brightStringVal);
          
      }
    else{
      
     }


    
    
    Serial.println(inputString);
    // clear the string:
     inputString = "";
    stringComplete = false;
  
   
  }
  
}

/*
  SerialEvent occurs whenever a new data comes in the hardware serial RX. This
  routine is run between each time loop() runs, so using delay inside loop can
  delay response. Multiple bytes of data may be available.
*/
void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
   
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n' || inChar == '\r') {
      
      stringComplete = true;

    }
    else{
      
     inputString += inChar;  
    }

     /////input here
   
    
  }
}
