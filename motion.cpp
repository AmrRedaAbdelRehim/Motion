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
  
  analogWrite(en1, 0);
  analogWrite(en2, 0);
  analogWrite(en3, 0);
  analogWrite(en4, 0);
  
};
void Motion::Forword() {
  digitalWrite(Motor1R_right_pin, HIGH);
  digitalWrite(Motor2L_right_pin, HIGH);
  digitalWrite(Motor3R_right_pin, HIGH);
  digitalWrite(Motor4L_right_pin, HIGH);


  analogWrite(en1, Speed);
  analogWrite(en2, Speed);
  analogWrite(en3, Speed);
  analogWrite(en4, Speed);
  
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


  analogWrite(en1, Speed);
  analogWrite(en2, Speed);
  analogWrite(en3, Speed);
  analogWrite(en4, Speed);
  
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


  analogWrite(en1, Speed);
  analogWrite(en2, Speed);
  analogWrite(en3, Speed);
  analogWrite(en4, Speed);
  
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


  analogWrite(en1, Speed);
  analogWrite(en2, Speed);
  analogWrite(en3, Speed);
  analogWrite(en4, Speed);
  
  digitalWrite(Motor1R_left_pin, LOW);
  digitalWrite(Motor2L_left_pin, HIGH);
  digitalWrite(Motor3R_left_pin, LOW);
  digitalWrite(Motor4L_left_pin, HIGH);
};
void Motion::Stop() {
  digitalWrite(Motor1R_right_pin, LOW);
  digitalWrite(Motor2L_right_pin, LOW);
  digitalWrite(Motor3R_right_pin, LOW);
  digitalWrite(Motor4L_right_pin, LOW);

  digitalWrite(Motor1R_left_pin, LOW);
  digitalWrite(Motor2L_left_pin, LOW);
  digitalWrite(Motor3R_left_pin, LOW);
  digitalWrite(Motor4L_left_pin, LOW);
};
