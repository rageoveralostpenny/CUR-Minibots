#include <Arduino.h>

#include "sensors.h"

UltraSonicDistanceSensor US_left(US_LEFT_TRIGGER, US_LEFT_ECHO);
UltraSonicDistanceSensor US_right(US_RIGHT_TRIGGER, US_RIGHT_ECHO);
UltraSonicDistanceSensor US_front(US_FRONT_TRIGGER, US_FRONT_ECHO);

Adafruit_MPU6050 mpu;

// Function to read values of the LEFT ultrasonic sensor
float readLeftUS(){
  return US_left.measureDistanceCm();
}
// Function to read values of the RIGHT ultrasonic sensor
float readRightUS(){
  return US_right.measureDistanceCm();
}
// Function to read values of the FRONT ultrasonic sensor
float readFrontUS(){
  return US_front.measureDistanceCm();
}

void displayUS(){
  float left=readLeftUS();
  float right = readRightUS();
  float front = readFrontUS();

  if(left != -1.0 && right != -1.0 && front != -1.0){
    Serial.println("All ultrasonic sensors working! Sensor values:");
    Serial.println("Left:");Serial.print(left);Serial.print(" Right:");Serial.print(right);Serial.print(" Front:");Serial.print(front);
  }

  else{
    if(left==-1.0){
      Serial.println("Left ultrasonic sensor invalid, covered or too far from an obstacle.");
    }
    delay(2);
    if(right==-1.0){
      Serial.println("Right ultrasonic sensor invalid, covered or too far from an obstacle.");
    }
    delay(2);
    if(front==-1.0){
      Serial.println("Front ultrasonic sensor invalid, covered or too far from an obstacle.");
    }
    delay(2);
    Serial.println("Sensor values (Left, Right, Front):");Serial.print(left);Serial.print(right);Serial.print(front);
  }
  delay (20);
  exit(0);
}
