int CW[4] = {
  0b1000, 0b0100, 0b0010, 0b0001
}; 



void setup() {
  // put your setup code here, to run once:
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(8,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

int temp;
for(int i = 0; i< 2048; i++){
  temp = i % 4;

  digitalWrite(11,bitRead(CW[temp],0)); // 0 0 0 1 0
  digitalWrite(10,bitRead(CW[temp],1)); // 0 0 1 0 0
  digitalWrite(9,bitRead(CW[temp],2));  // 0 1 0 0 0
  digitalWrite(8,bitRead(CW[temp],3));  // 1 0 0 0 1
 delay(3);

}

delay(1000);


}
