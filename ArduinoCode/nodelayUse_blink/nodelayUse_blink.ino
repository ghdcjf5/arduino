int ledPin1 = 13;

int ledPin2 = 12;

int count = 0;

int ledState1 = LOW;

int ledState2 = LOW;

long previousMillis = 0;

long interval = 500;

void setup()

{ 

  pinMode( ledPin1,OUTPUT); 

  pinMode( ledPin2,OUTPUT); 

  Serial.begin(9600);

}

void loop()

{

  unsigned long currentMillis = millis();   //cpu에서 clock으로 1 ms씩 올라가는 함수

    if( currentMillis - previousMillis >= interval) { //500-0이 500이 되면 pre는 500 넣어주고

      previousMillis = currentMillis; 

        if(ledState1 == LOW)

          ledState1 = HIGH;

        else 

          ledState1 = LOW; 

       digitalWrite(ledPin1,ledState1); // ->0.5초마다 점멸
       Serial.println(currentMillis);
       ++count; 

       if(count%2==0) //current가 1000이 되면 led2 켜짐 -> 1초마다 점멸

       {

          if(ledState2 == LOW)

               ledState2 = HIGH;

          else 

              ledState2 = LOW; 

          digitalWrite(ledPin2,ledState2);

    }

  }

} 
