#include <Servo.h>
Servo myservo;
int val, Servopin=9, angle=0;
void setup() {
  Serial.begin(9600);
  myservo.attach(Servopin);
 
    Serial.println(angle);
  }
  void loop(){
  myservo.write(0);
  delay(100);
  myservo.write(60);
  delay(100);
  myservo.write(120);
  delay(100);
  myservo.write(180);
  delay(100);
}