#include <Arduino.h>

float ph_offset = 0.0;
float ec_offset = 0.0;

void setPHCalibration(float offset){
    ph_offset = offset;
}

void setECCalibration(float offset){
    ec_offset = offset;
}

float applyPHCalibration(float raw_value){
    return raw_value + ph_offset;
}

float applyECCalibration(float raw_value){
    return raw_value + ec_offset;
}
