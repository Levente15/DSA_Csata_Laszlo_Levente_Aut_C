//
// Created by Legion on 5/12/2021.
//

#ifndef INC_1_FELADAT_FUNCTIONS_H
#define INC_1_FELADAT_FUNCTIONS_H
#include <stdbool.h>

typedef struct {
    int year;
    int forint;
    int peni;
}Money;

Money* creatMoney();

bool compare(Money* m1, Money* m2){
    if(m1->forint>m2->forint)
        return true;
    else if(m1->forint<m2->forint)
        return false;

    if(m1->peni>m2->peni)
        return true;
    else if(m1->peni<m2->peni)
        return false;

    return false;
}

#endif //INC_1_FELADAT_FUNCTIONS_H
