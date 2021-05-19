//
// Created by Legion on 5/12/2021.
//

#ifndef INC_1_FELADAT_FUNCTIONS_H
#define INC_1_FELADAT_FUNCTIONS_H
#include <stdbool.h>

typedef struct {
    int year;
    int month;
    int forint;
    int peni;
}Money;

Money* creatMoney();

bool compare(Money* m1, Money* m2);

#endif //INC_1_FELADAT_FUNCTIONS_H
