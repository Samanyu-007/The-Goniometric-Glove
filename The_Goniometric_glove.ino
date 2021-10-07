#include <Servo.h>

Servo servoThumb;
Servo servoIndex;
Servo servoMiddle;
Servo servoRing;
Servo servoLittle;

//flex sensor pins assigned here-
const int thumbPin = A0;
const int indexPin = A1;
const int middlePin = A2;
const int ringPin = A3;
const int littlePin = A4;

//servo pins assigned here
int thumbServo = 10;
int indexServo = 9;
int middleServo = 6;
int ringServo = 5;
int littleServo = 3;

void setup()
{
  Serial.begin(9600);
  servoThumb.attach(10);
  servoIndex.attach(9);
  servoMiddle.attach(6);
  servoRing.attach(5);
  servoLittle.attach(3);
}

void loop()
{
  //thumb finger (Thu)
  int flexThuValue;
  int servoThuPosition;
  
  flexThuValue = analogRead(thumbPin);
  
  if (flexThuValue > 953)
  {
    Serial.print("Thumb: ");
    Serial.println(flexThuValue);
  }
  servoThuPosition = map(flexThuValue, 953, 1007, 0, 180);
  servoThuPosition = constrain(servoThuPosition, 0, 180);
  servoThumb.write(servoThuPosition);
  
  delay(20);   
  
  
  //index finger (Ind)
  int flexIndValue;
  int servoIndPosition;
  
  flexIndValue = analogRead(indexPin);
  
  if (flexIndValue > 953)
  {
    Serial.print("Index Finger: ");
    Serial.println(flexIndValue);
  }
  servoIndPosition = map(flexIndValue, 953, 1007, 0, 180);
  servoIndPosition = constrain(servoIndPosition, 0, 180);
  servoIndex.write(servoIndPosition);
  
  delay(20);
  
  
  //middle finger (Mid)
  int flexMidValue;
  int servoMidPosition;
  
  flexMidValue = analogRead(middlePin);
  
  if (flexMidValue >953)
  {
    Serial.print("Middle Finger: ");
    Serial.println(flexMidValue);
  }
  servoMidPosition = map(flexMidValue, 953, 1007, 0, 180);
  servoMidPosition = constrain(servoMidPosition, 0, 180);
  servoMiddle.write(servoMidPosition);
  
  delay(20);
  
  
  //ring finger (Ring)
  int flexRingValue;
  int servoRingPosition;
  
  flexRingValue = analogRead(ringPin);
  
  if (flexRingValue >953)
  {
    Serial.print("Ring Finger: ");
    Serial.println(flexRingValue);
  }
  servoRingPosition = map(flexRingValue, 953, 1007, 0, 180);
  servoRingPosition = constrain(servoRingPosition, 0, 180);
  servoRing.write(servoRingPosition);
  
  delay(20);   
  
  
  //little finger (Litt)
  int flexLittValue;
  int servoLittPosition;
  
  flexLittValue = analogRead(littlePin);
  
  if (flexLittValue > 953)
  {
    Serial.print("Little Finger: ");
    Serial.println(flexLittValue);
  }
  servoLittPosition = map(flexLittValue, 953, 1007, 0, 180);
  servoLittPosition = constrain(servoLittPosition, 0, 180);
  servoLittle.write(servoLittPosition);
  
  delay(20);      
}
