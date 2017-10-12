#include <Wire.h> 
#include <Adafruit_MotorShield.h> 
#include "utility/Adafruit_MS_PWMServoDriver.h" 
  
  
  
const int buttonPinFWD = 2; // the number of the pushbutton pin 
const int buttonPinBKF = 3; 
const int buttonPinSP = 4; 
const int buttonPinLFT = 5; 
const int buttonPinSLW = 6; 
const int buttonPinRHT = 7; 
  
const int ledPin = 13; // the number of the LED pin 
  
int buttonState1 = 0; // variable for reading the pushbutton status 
int buttonState2 = 0; 
int buttonState3 = 0; 
int buttonState4 = 0; 
int buttonState5 = 0; 
int buttonState6 = 0; 
  
  
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
pinMode(buttonPinBKF, INPUT); 
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
ButtonState1 = digitalRead(buttonPinFWD); 
ButtonState2 = digitalRead(buttonPinBKW); 
ButtonState3 = digitalRead(buttonPinSP); 
ButtonState4 = digitalRead(buttonPinLFT); 
ButtonState5 = digitalRead(buttonPinSLW); 
ButtonState6 = digitalRead(buttonPinRHT); 
 
if (ButtonState1 == HIGH) 
MotorFWD(); // calls MotorFWD subroutine 
 
    
 
 
} 
 
 
Void MotorFWD() { 
digitalWrite(ledPin, HIGH); // turn on LED 
 
myMotorL->setSpeed(255); 
myMotorR->setSpeed(255); 
 
myMotorL->run(FORWARD); 
myMotorR->run(FORWARD); 
  // turn on motor 
} 
 
 
