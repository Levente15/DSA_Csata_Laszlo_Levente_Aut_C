//
// Created by Legion on 4/21/2021.
//

#ifndef PARCIALIS_2_FUNCTIONS_H
#define PARCIALIS_2_FUNCTIONS_H
#include "stdbool.h"
typedef struct {
    int c;
    int* num;
}F;

F* create(int meret);
F* readfromfile(char* filename);
void kiir(F* p);
void gyok(F* p);
void osszeg(F* p);
bool mindeniknagyobbminttiz(F* p);



#endif //PARCIALIS_2_FUNCTIONS_H
