#include <Servo.h>

#define leftServoPin 9
#define rightServoPin 3
#define servoShoulder 5
#define servoElbow 4
#define servoGripper 2

Servo leftMotor, rightMotor, shoulder, elbow, gripper, sonicBase;

bool grabbed = false; //for when the claw grabs an object

void setup() {
    shoulder.attach(servoShoulder);
    elbow.attach(servoElbow);
    gripper.attach(servoGripper);
    Serial.begin(9600); //for debugging
    adjust();
    Serial.print("adjusted");
    delay(2000);
}

void loop(){  
    catchObject();
  
  if(grabbed){
    left();
    delay(1200);
    forward();
    delay(2500);
    dropObject();
  } 
  
  if(!grabbed){
    right();
    delay(3600);
    forward();
    delay(2500);
  }
  delay(2000);
  adjust();
  delay(3000);
}

void adjust(){
  leftMotor.detach();
  rightMotor.detach();
  shoulder.write(60);
  elbow.write(100);
  Serial.println("elbow 150 degrees");
  gripper.write(90);
  Serial.println(" gripper 90 degrees");
  delay(1000);
}

void catchObject(){
  leftMotor.detach();
  rightMotor.detach();
  delay(200);
  gripper.write(30);
  Serial.println("closed");
  delay(1000);
  shoulder.write(120);
  elbow.write(175);
  delay(1000);
  grabbed = true;
}

void dropObject(){
  leftMotor.detach();
  rightMotor.detach();
  delay(200);
  elbow.write(180);
  delay(1000);
  gripper.write(90);
  delay(3000);
  grabbed=false;
}

void forward(){
  leftMotor.attach(leftServoPin);
  rightMotor.attach(rightServoPin);
  leftMotor.write(0);
  rightMotor.write(180);
}

void right(){
  leftMotor.attach(leftServoPin);
  rightMotor.attach(rightServoPin);
  leftMotor.write(180);
  rightMotor.write(180);
}

void left(){
  leftMotor.attach(leftServoPin);
  rightMotor.attach(rightServoPin);
  leftMotor.write(0);
  rightMotor.write(0);
}
