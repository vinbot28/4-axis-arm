#include <Servo.h>

// effector code has been commented out in case user wants to use expansion slot

// declaring servos
Servo turret;
Servo shoulder;
Servo elbow;
Servo wrist;
// Servo effector; 

// assigning pins to servos (pwm ports)
const int turretPin = 6;
const int shoulderPin = 8;
const int elbowPin = 9;
const int wristPin = 12;
// const int effectorPin = 14; 

// assigning pins to potentiometers (analog ports)
const int T_potPin = 19;
const int S_potPin = 20;
const int E_potPin = 21;
const int W_potPin = 22;
//const int EF_potPin = 23;

// vars for pot readings
int T_potVal;
int S_potVal;
int E_potVal;
int W_potVal;
//int EF_potVal;

void setup() {
  turret.attach(turretPin);
  shoulder.attach(shoulderPin);
  elbow.attach(elbowPin);
  wrist.attach(wristPin);
  //effector.attach(effectorPin);
}

void loop() {
  //grabbing values from pots
  T_potVal = analogRead(T_potPin);
  S_potVal = analogRead(S_potPin);
  E_potVal = analogRead(E_potPin);
  W_potVal = analogRead(W_potPin);
  //EF_potVal = analogRead(EF_potPin);

  //scaling pot values to servo 0-180 value
  T_potVal = map(T_potVal, 0, 1023, 0, 180);
  S_potVal = map(S_potVal, 0, 1023, 0, 180);
  E_potVal = map(E_potVal, 0, 1023, 0, 180);
  W_potVal = map(W_potVal, 0, 1023, 0, 180);
  //EF_potVal = map(EF_potVal, 0, 1023, 0, 180);

  //sending values to servo
  turret.write(T_potVal);
  shoulder.write(S_potVal);
  elbow.write(E_potVal);
  wrist.write(W_potVal);
  //effector.write(EF_potVal);
  
  delay(20);
}
