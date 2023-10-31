#include <Arduino.h>
#include "config.h"
#ifndef Motion_H
#define Motion_H
class Motion {
private:
  
public:
  void init();
  void forword();
  void backword();
  void right();
  void left();
  void stop();
  int Speed;
  int motor_speed_1;
  int motor_speed_2;
  int motor_speed_3;
  int motor_speed_4;


  Motion() {
    this->motor_speed_1 = 0;
    this->motor_speed_2 = 0;
    this->motor_speed_3 = 0;
    this->motor_speed_4 = 0;
    this->Speed = 80;
  };
  
#endif
