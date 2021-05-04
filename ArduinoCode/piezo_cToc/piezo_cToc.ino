#include <Pitch.h>


#define SPKROUT 12


void setup() {
  // put your setup code here, to run once:
  pinMode(SPKROUT,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);

   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
   
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
   
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
   
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
   
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
   
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
   
   tone(SPKROUT,NOTE_C6,1000);
   delay(1000);
}
