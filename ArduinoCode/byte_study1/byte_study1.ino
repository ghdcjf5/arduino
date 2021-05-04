int i;
long l;
double d;
float f;


void setup() {
  // put your setup code here, to run once: 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


 // Serial.println("c"+333);
  Serial.println("i" + String(sizeof(int)));
  Serial.println("l" + String(sizeof(long)));
  Serial.println("d" + String(sizeof(double)));
  Serial.println("f" + String(sizeof(float)));
  while(1);
}
