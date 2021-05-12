//
// Created by Legion on 5/12/2021.
//

#include "functions.h"
#include <stdlib.h>
#include "stdio.h"

Money* creatMoney(){
    Money * money=(Money*)malloc(sizeof (Money));

    if(!money){
        printf("Error#1");
        return NULL;
    }
    money->year=0;
    money->forint=0;
    money->peni=0;


    return money;
}

