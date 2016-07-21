#include <Servo.h>

Servo servoLeft;
Servo servoRight;

void setup() {
  // put your setup code here, to run once:

  servoLeft.attach(13);
  servoRight.attach(12);
 
  forward();
  delay(4000);
  rotateR();
  delay(4000);
  rotateL();
  delay(4000);
  turnRight();
  delay(4000);
  turnLeft();
  delay(4000);
  jerkR();
  delay(4000);
  jerkL();
  delay(4000);
  jerkForw();
  delay(4000);
  back();
  delay(4000);
  clap();
  delay(4000);
  crissCross();
  delay(4000);
  onKnees();
  delay(4000);
  chacha();
  delay(4000);
  

}

void forward(){
servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);

}

void rotateR(){
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1300);
  servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
  delay(2000);
}

void rotateL(){
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1700);
   servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
   delay(2000);
}

void turnRight(){
   servoLeft.writeMicroseconds(1300);
   servoRight.writeMicroseconds(1300);
   delay(400);
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1700);
   delay(400);
   servoLeft.writeMicroseconds(1500);
   servoRight.writeMicroseconds(1500);
   servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
   delay(2000);
}

void turnLeft(){
   servoLeft.writeMicroseconds(1700);
   servoRight.writeMicroseconds(1700);
   delay(400);
   servoLeft.writeMicroseconds(1300);
   servoRight.writeMicroseconds(1300);
   delay(400);
   servoLeft.writeMicroseconds(1500);
   servoRight.writeMicroseconds(1500);
   servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
   delay(2000);
   
}

void jerkL(){
   servoLeft.writeMicroseconds(1700);
   delay(300);
   servoRight.writeMicroseconds(1700);
   servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
   delay(2000);
}

void jerkR(){
   servoLeft.writeMicroseconds(1300);
   delay(300);
   servoRight.writeMicroseconds(1300);
   servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
   delay(2000);
}

void jerkForw(){
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay(200);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700);
  servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
  delay(2000);
}

void back(){
  servoLeft.writeMicroseconds(1300);
servoRight.writeMicroseconds(1700);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);
}

void clap(){
 servoLeft.writeMicroseconds(1700);
 servoRight.writeMicroseconds(1300);
 delay(100);
  servoLeft.writeMicroseconds(1300);
servoRight.writeMicroseconds(1700);
delay(100);
 servoLeft.writeMicroseconds(1300);
servoRight.writeMicroseconds(1700);
delay(100);
 servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);
  
}

void crissCross(){
  servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1300);
 delay(400);
  servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1700);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);
}

void onKnees(){
  servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1300);
 delay(400);
 servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);
delay(400);
  servoLeft.writeMicroseconds(1700);
 servoRight.writeMicroseconds(1700);
 delay(400);
  servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1300);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);
}

void chacha (){
    servoLeft.writeMicroseconds(1300);
 servoRight.writeMicroseconds(1300);
 delay(2000);
  servoLeft.writeMicroseconds(1700);
servoRight.writeMicroseconds(1700);
servoLeft.writeMicroseconds(1500);
servoRight.writeMicroseconds(1500);
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}
