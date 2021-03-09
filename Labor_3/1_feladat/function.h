//
// Created by Legion on 3/7/2021.
//

#ifndef INC_1_FELADAT_FUNCTION_H
#define INC_1_FELADAT_FUNCTION_H
#include <stdio.h>

typedef struct {
    char firstname[30];
    char lastname[30];
    char highschool[30];
    double average;
}KOZEPFOK;
typedef struct {
    char firstname[30];
    char lastname[30];
    char institute[30];
    double department[30];
}FELSOFOK;
typedef struct {
    char name[25];
    char education;
    KOZEPFOK kozepfok;
    FELSOFOK felsofok;
}CEG;
CEG *create(int n);
void read_data(CEG* a, int n, FILE *fin);
write_data(CEG* a, int n);
#endif //INC_1_FELADAT_FUNCTION_H
