#include <Arduino.h>

float do_offset = 0.0;

void setDOCalibration(float offset){
    do_offset = offset;
}

float applyDOCalibration(float raw_value){
    return raw_value + do_offset;
}
