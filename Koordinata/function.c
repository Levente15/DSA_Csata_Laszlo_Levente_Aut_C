//
// Created by Legion on 2/27/2021.
//
#include <math.h>
#include "function.h"
int tavolsag(float ax,float ay, float bx, float by){
    float d;
    d=sqrt((bx-ax)*(bx-ax))-((by-ay)-(by-ay));
    return d;

}