//
// Created by Legion on 5/12/2021.
//

#ifndef INC_1_FELADAT_ARFOLYAM_H
#define INC_1_FELADAT_ARFOLYAM_H

#include "functions.h"

typedef struct Heap{
    Money** data;
    int size;
    int maxSize;
}Heap;

Heap *createHeap(int max);
void insert(Heap* heap, Money* money);
void up(Heap* heap, int i);
void down(Heap* heap, int i);
void kupacrendez(Heap* heap, int n);
Money *torolmax(Heap *heap);
void readfromfile(Heap* heap, char* fileName);
#endif //INC_1_FELADAT_ARFOLYAM_H
