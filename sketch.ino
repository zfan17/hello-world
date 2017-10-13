#include <Wire.h> 
#include <Adafruit_MotorShield.h> 
#include "utility/Adafruit_MS_PWMServoDriver.h" 
  
  
  
const int buttonPinFWD = 2; // the number of the pushbutton pin 
const int buttonPinBKD = 3; 
const int buttonPinSP = 4; 
const int buttonPinLFT = 5; 
const int buttonPinSLW = 6; 
const int buttonPinRHT = 7; 
  
const int ledPin = 13; // the number of the LED pin 
   
  
  
Adafruit_MotorShield AFMS = Adafruit_MotorShield();  
  
Adafruit_DCMotor *myMotorL = AFMS.getMotor(1); 
Adafruit_DCMotor *myMotorR = AFMS.getMotor(2); 
 
  
  
  
void setup() { 
  // put your setup code here, to run once: 
  // initialize the LED pin as an output: 
   
Serial.begin(9600); // set up Serial library at 9600 bps 
  
pinMode(ledPin, OUTPUT); 
  // initialize the pushbutton pin as an input: 
  
pinMode(buttonPinFWD, INPUT); 
pinMode(buttonPinBKD, INPUT); 
pinMode(buttonPinSP, INPUT); 
pinMode(buttonPinLFT, INPUT); 
pinMode(buttonPinSLW, INPUT); 
pinMode(buttonPinRHT, INPUT); 
  
Serial.println("Adafruit Motorshield v2 - DC Motor test!"); 
  
AFMS.begin(); // create with the default frequency 1.6KHz 
} 
  
void loop() { 
  // put your main code here, to run repeatedly: 
  // read the state of the pushbutton value: 
 
while (digitalRead(buttonPinFWD) == HIGH) {
MotorFWD();
} // calls MotorFWD subroutine
while (digitalRead(buttonPinBKD) == HIGH) {
MotorBKD();
}
while (digitalRead(buttonPinSP) == HIGH) {
MotorSP();
}
while (digitalRead(buttonPinLFT) == HIGH) {
MotorLFT();
}
while (digitalRead(buttonPinSLW) == HIGH) {
MotorSLW();
}
while (digitalRead(buttonPinRHT) == HIGH) {
MotorRHT();
}
    
 
 
} 
 
 
void MotorFWD() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(255); 
myMotorR->setSpeed(255); 
 
myMotorL->run(FORWARD); 
myMotorR->run(FORWARD); 
  // turn on motor 
} 

void MotorBKD() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(255); 
myMotorR->setSpeed(255); 
 
myMotorL->run(BACKWARD); 
myMotorR->run(BACKWARD); 
  // turn on motor 
} 

void MotorSP() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(255); 
myMotorR->setSpeed(150); 
 
myMotorL->run(FORWARD); 
myMotorR->run(FORWARD); 
  // turn on motor 
} 

void MotorLFT() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(200); 
myMotorR->setSpeed(255); 
 
myMotorL->run(FORWARD); 
myMotorR->run(FORWARD); 
  // turn on motor 
} 

void MotorSLW() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(150); 
myMotorR->setSpeed(150); 
 
myMotorL->run(FORWARD); 
myMotorR->run(FORWARD); 
  // turn on motor 
} 

void MotorRHT() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(255); 
myMotorR->setSpeed(200); 
 
myMotorL->run(FORWARD); 
myMotorR->run(FORWARD); 
  // turn on motor 
} 
