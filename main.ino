#include "Motion.h"
#include "config.h"
Motion motion_r;

void setup() {
Serial.begin(9600);

motion_r.init();
  motion_r.forword();
motion_r.backword();
motion_r.right();
motion_r.left();
  motion_r.stop();


}

void loop() {

}
