#include <Servo.h> 
int leftWhisker = 5;
int rightWhisker = 7;

int PIEZOPIN = 14;

Servo servoRight;
Servo servoLeft;

void moveKitty() {
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  }

void stopKitty() {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500); 
  delay(1000);
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1700); 
  delay(1000);
  }
 
void right() {
  servoLeft.writeMicroseconds(1300);
  servoRight.writeMicroseconds(1500);
  delay(1000); 
}
void left() {
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1300);
  delay(1000);
}

void setup() {
  pinMode(PIEZOPIN, OUTPUT);                 // Attach piezo to pin 5. 
  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
  servoLeft.writeMicroseconds(1500);        // Calibrate left servo
  servoRight.writeMicroseconds(1500);       // Calibrate right servo
  // Attach LED pins here.
  Serial.begin(9600);
   pinMode(leftWhisker, INPUT);
   pinMode(rightWhisker, INPUT);
}

void loop() {
  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);
  Serial.print("Left :");
  Serial.print(leftWhiskerValue);
  Serial.print(" Right :");
  Serial.print(rightWhiskerValue);
  Serial.println("");
  if(leftWhiskerValue == 0 || rightWhiskerValue == 0){
    Serial.println("Left and Right pressed!");
    stopKitty();
  }
    else if (leftWhiskerValue == 0) {
    Serial.print("Left pressed!");
    stopKitty();
    right();
    moveKitty();
   } 
   else if(rightWhiskerValue == 0){
    Serial.print("Right pressed!");
    stopKitty();
    left();
    moveKitty();
   } 
   else {
    Serial.print("No whiskers pressed!");
    moveKitty();
   }
}

