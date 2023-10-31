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
  


  Motion() {
    
    this->Speed = 80;
  };
  
#endif
