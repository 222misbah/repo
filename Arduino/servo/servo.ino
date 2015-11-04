#include <Servo.h>
Servo ma;

void setup()
{

Serial.begin(9600);


ma.attach(9);
}

void loop() {
  int i,j;
  
if (Serial.available()) {
  i = Serial.parseInt();
  j = map(i, 180,0, 180, 0);
  ma.write(j);
 delay(100);
}
}
 
  
