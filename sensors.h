#include <HCSR04.h>
#include <Adafruit_MPU6050.h>
#include "config.h"

extern UltraSonicDistanceSensor US_left;
extern UltraSonicDistanceSensor US_right;
extern UltraSonicDistanceSensor US_front;

extern Adafruit_MPU6050 mpu;

// Function to read values of the LEFT ultrasonic sensor
float readLeftUS();
// Function to read values of the RIGHT ultrasonic sensor
float readRightUS();
// Function to read values of the FRONT ultrasonic sensor
float readFrontUS();

// Function to read values of the LEFT light sensor
// Output true/false if it finds the line or not (can turn on the sensor itself)
float readLeftLight();
  bool val = digitalRead(Sensor);
  if{val ==1}{
    return true
  }
  else{
    return false
  }
  delay(500);
  
  
// Function to read values of the RIGHT light sensor
// Output true/false if it finds the line or not (can turn on the sensor itself)
float readRightLight();
  if{val ==1}{
    return true
  }
  else{
    return false
  }
  delay(500);
  
// Quick print function to see if all the ultrasonic sensors are funcitonal 
void displayUS();
// Quick print function to see if all the light sensors are funcitonal 
void displayLight();
  l_light = readRightlight();
  r_light = readRightLight();
  cout <<l_light;
  cout <<r_light;
  cout readLeftLight();
