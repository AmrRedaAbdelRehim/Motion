#include "Motion.h"
void Motion::init() {
  pinMode(Motor1R_right_pin, OUTPUT);
  pinMode(Motor2L_right_pin, OUTPUT);
  pinMode(Motor3R_right_pin, OUTPUT);
  pinMode(Motor4L_right_pin, OUTPUT);
  
  pinMode(Motor1R_left_pin, OUTPUT);
  pinMode(Motor2L_left_pin, OUTPUT);
  pinMode(Motor3R_left_pin, OUTPUT);
  pinMode(Motor4L_left_pin, OUTPUT);
  
  analogWrite(Motor1R_right_pin, 0);
  analogWrite(Motor2L_right_pin, 0);
  analogWrite(Motor1R_left_pin, 0);
  analogWrite(Motor2L_left_pin, 0);
  analogWrite(Motor3R_right_pin, 0);
  analogWrite(Motor3R_left_pin, 0);
  analogWrite(Motor4L_right_pin, 0);
  analogWrite(Motor4L_left_pin, 0);
};
void Motion::Forword() {
  digitalWrite(Motor1R_right_pin, HIGH);
  digitalWrite(Motor2L_right_pin, HIGH);
  digitalWrite(Motor3R_right_pin, HIGH);
  digitalWrite(Motor4L_right_pin, HIGH);


  analogWrite(Motor1R_right_pin, Speed);
  analogWrite(Motor2L_right_pin, Speed);
  analogWrite(Motor3R_right_pin, Speed);
  analogWrite(Motor4L_right_pin, Speed);
  
  digitalWrite(Motor1R_left_pin, LOW);
  digitalWrite(Motor2L_left_pin, LOW);
  digitalWrite(Motor3R_left_pin, LOW);
  digitalWrite(Motor4L_left_pin, LOW);
};
void Motion::Backword() {
  digitalWrite(Motor1R_right_pin, LOW);
  digitalWrite(Motor2L_right_pin, LOW);
  digitalWrite(Motor3R_right_pin, LOW);
  digitalWrite(Motor4L_right_pin, LOW);


  analogWrite(Motor1R_left_pin, Speed);
  analogWrite(Motor2L_left_pin, Speed);
  analogWrite(Motor3R_left_pin, Speed);
  analogWrite(Motor4R_left_pin, Speed);
  
  digitalWrite(Motor1R_left_pin, HIGH);
  digitalWrite(Motor2L_left_pin, HIGH);
  digitalWrite(Motor3R_left_pin, HIGH);
  digitalWrite(Motor4L_left_pin, HIGH);
};
void Motion::Right() {
  digitalWrite(Motor1R_right_pin, LOW);
  digitalWrite(Motor2L_right_pin, HIGH);
  digitalWrite(Motor3R_right_pin, LOW);
  digitalWrite(Motor4L_right_pin, HIGH);


  analogWrite(Motor2L_right_pin, Speed);
  analogWrite(Motor1R_left_pin, Speed);
  analogWrite(Motor3R_left_pin, Speed);
  analogWrite(Motor4L_right_pin, Speed);
  
  digitalWrite(Motor1R_left_pin, HIGH);
  digitalWrite(Motor2L_left_pin, LOW);
  digitalWrite(Motor3R_left_pin, HIGH);
  digitalWrite(Motor4L_left_pin, LOW);
};
void Motion::Left() {
  digitalWrite(Motor1R_right_pin, HIGH);
  digitalWrite(Motor2L_right_pin, LOW);
  digitalWrite(Motor3R_right_pin, HIGH);
  digitalWrite(Motor4L_right_pin, LOW);


  analogWrite(Motor1R_right_pin, Speed);
  analogWrite(Motor2L_left_pin, Speed);
  analogWrite(Motor3R_right_pin, Speed);
  analogWrite(Motor4L_left_pin, Speed);
  
  digitalWrite(Motor1R_left_pin, LOW);
  digitalWrite(Motor2L_left_pin, HIGH);
  digitalWrite(Motor3R_left_pin, LOW);
  digitalWrite(Motor4L_left_pin, HIGH);
};
void Motion::Stop() {
  analogWrite(Motor1R_right_pin, 0);
  analogWrite(Motor2L_right_pin, 0);
  analogWrite(Motor1R_left_pin, 0);
  analogWrite(Motor2L_left_pin, 0);
  analogWrite(Motor3R_right_pin, 0);
  analogWrite(Motor3R_left_pin, 0);
  analogWrite(Motor4L_right_pin, 0);
  analogWrite(Motor4L_left_pin, 0);
};
