#include "Motion.h"
#include "config.h"
Motion motion_r;

void setup() {
Serial.begin(9600);

motion_r.init();
}

void loop() {

}
