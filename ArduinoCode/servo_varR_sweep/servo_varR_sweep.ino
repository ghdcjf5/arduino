/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

//int pos = 0;    // variable to store the servo position
double valCnvrt = 0;
void setup() {
  myservo.attach(10);  // attaches the servo on pin # to the servo object
  pinMode(A0,INPUT);


}

void loop() {
     valCnvrt = analogRead(A0)*180.0/1023.0;
  //  valCnvrt = analogRead(A0);
  //  valCnvrt = map(valCnvrt,0,1023,0,179);
 
    myservo.write((int)valCnvrt);              // tell servo to go to position in variable 'pos'
    delay(100);                       // waits 15ms for the servo to reach the position
 
}
