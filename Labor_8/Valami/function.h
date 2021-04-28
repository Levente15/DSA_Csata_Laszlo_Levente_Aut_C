//
// Created by Legion on 4/21/2021.
//

#ifndef PARCIALIS_1_FUNCTION_H
#define PARCIALIS_1_FUNCTION_H

#include <stdbool.h>

int count;
typedef struct {
    int nr;
    int*numbers;
}P;

P* create(int meret);

P* readfromfile(char* filename);

void atlagfele(P* p);

void kiir(P* p);

typedef struct NType{
    int n;
    struct NType* k;
}NType;
void kiiratlagfele(P* p);
bool mindenpozitiv(P* p);
int paratlanszam(P* p);

NType* createNType();
NType* readfromfileNtype(char *filename);

int pop(NType** verem);
int top(NType* verem);

bool isEmpty( NType* topPtr);
void push(NType** verem, int n);

void kiirstack(NType* verem);

float atlag(NType* verem);
bool mindenszampozitiv(NType* verem);
int paratlanszamverem(NType* verem);

typedef struct {

};
#endif //PARCIALIS_1_FUNCTION_H
