

#define LedPin11 11
#define LedPin13 13
#define LedPin9 9
#define LedPin8 8

String inputString = "";         
bool stringComplete = false;  
String brightString = "";
String brightValueStr = "";
String pinSelect = "";
int    stringLength=0;

void setup() {
  // Open serial communications and wait for port to open:

  pinMode(LedPin11,OUTPUT);  
  pinMode(LedPin13,OUTPUT);  
  pinMode(LedPin8,OUTPUT);  
  pinMode(LedPin9,OUTPUT);
  
  
  
  Serial.begin(9600);
  inputString.reserve(200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }  
}

void loop() { // run over and over
 if(digitalRead(LedPin8) ==HIGH)
 {
    
   Serial.println("sw_on");
  
 }
 
 if(digitalRead(LedPin9) ==HIGH)
 {
    
   Serial.println("sw_off");
  
 }
  
  
  
  if(Serial.available()) 
  {
    char inChar = (char)Serial.read();
    if (inChar == '\n' || inChar == '\r') 
    {   
      stringComplete = true;
    }
    else
      inputString += inChar;
   }
   
   if (stringComplete) 
   {
    
      inputString.toUpperCase(); 
      
      stringLength = inputString.length();   

    
      if(inputString.equals("LED_ON"))
      {
         digitalWrite(LedPin13,HIGH);
         
      }
      else if(inputString.equals("LED_OFF"))
      {
          digitalWrite(LedPin13,LOW);
      }   

      else if(inputString.equals("BRIGHT_OFF"))
      {
          analogWrite(LedPin11,0);
      }   
     else if(inputString.equals("BRIGHT_HALF"))
      {
          analogWrite(LedPin11,127);
      }   
      else if(inputString.equals("BRIGHT_FULL"))
      {
          analogWrite(LedPin11,255);
      }   
           
   
        stringLength=0;
        pinSelect ="";
        inputString = "";
        stringComplete = false;  
    }    
}
