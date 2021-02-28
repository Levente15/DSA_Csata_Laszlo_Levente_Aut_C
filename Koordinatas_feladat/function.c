//
// Created by Legion on 2/28/2021.
//
#include "function.h"
#include <math.h>
int tavolsag(float ax,float ay, float bx, float by){
    float d=sqrt((bx-ax)*(bx-ax))+((by-ay)*(by-ay));
    return d;
}

