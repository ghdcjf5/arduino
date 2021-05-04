#define DO4
#define DOs4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4
#define DO4

int melody[] = {262, 294, 330, 349, 392, 440, 494, 523};//기본멜로디




void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  for(int i = 0; i<8; i++ ){
    tone(8,melody[i],250);
    //delay(400);
    //noTone(8); 
    
    }
}

void loop() {
  // put your main code here, to run repeatedly:

}
