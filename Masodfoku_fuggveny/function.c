//
// Created by Legion on 2/28/2021.
//

#include <math.h>
#include <stdio.h>
#include "function.h"


void szamit(float a, float b, float c){
    float delta=b*b-4*a*c;
    printf("Delta: %f\n",delta);
    float x1,x2,zsak;
    if(delta<0){
        printf("Nincs valos gyoke");
    }else if(delta=0){
       x1=-b/(2*a);
       x1=x2;
       printf("x1=x2= %f",x1);
    }
    else{
        zsak=sqrt(delta);
        x1=(-b+zsak)/(2*a);
        x2=(-b-zsak)/(2*a);
        printf("x1=: %0.2f\n",x1);
        printf("x2=: %0.2f",x2);
    }
}