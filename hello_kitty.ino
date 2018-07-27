#include <Servo.h>                           // Include servo library
int leftWhisker = 5;
int rightWhisker = 7;
Servo servoRight;
Servo servoLeft;

void moveKitty() {
  int leftWhiskerValue = digitalRead(leftWhisker);
 int rightWhiskerValue = digitalRead(rightWhisker);
 Serial.print("Left :");
 Serial.print(leftWhiskerValue);
 Serial.print(" Right :");
 Serial.print(rightWhiskerValue);
 Serial.println("");
 Serial.println("Left and Right pressed!");
}
 if(leftWhiskerValue == 0 && rightWhiskerValue == 0) {
  } else if(leftWhiskerValue == 0) {
    Serial.print("Left pressed!");
  } else if(rightWhiskerValue == 0) {
    Serial.print("Right pressed!");
  } else }
    Serial.print("No whiskers pressed!");
 
}

void stopKitty() {
  // Your Code Here
}

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);
  pinMode(leftWhisker, INPUT);
  pinMode(rightWhisker, INPUT);                   
}

void loop() {
  // put your main code here, to run repeatedly:
  
 int leftWhiskerValue = digitalRead(leftWhisker);
 int rightWhiskerValue = digitalRead(rightWhisker);
 Serial.print("Left :");
 Serial.print(leftWhiskerValue);
 Serial.print(" Right :");
 Serial.print(rightWhiskerValue);
 Serial.println("");
 Serial.println("Left and Right pressed!");
}
 if(leftWhiskerValue == 0 && rightWhiskerValue == 0) {
  } else if(leftWhiskerValue == 0) {
    Serial.print("Left pressed!");
  } else if(rightWhiskerValue == 0) {
    Serial.print("Right pressed!");
  } else }
    Serial.print("No whiskers pressed!");
  }

