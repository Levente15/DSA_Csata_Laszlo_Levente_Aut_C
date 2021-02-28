//
// Created by Legion on 2/28/2021.
//

#include "function.h"
#include <stdio.h>
void idoszamitas(int a){
    int ora,perc, masodperc;
    ora=a/3600;
    perc=(a-(ora*3600))/60;
    masodperc=(a-(ora*3600)-(perc*60));

    printf("ORA:PERC:MASODPERC %i,%i,%i", ora,perc,masodperc);
}