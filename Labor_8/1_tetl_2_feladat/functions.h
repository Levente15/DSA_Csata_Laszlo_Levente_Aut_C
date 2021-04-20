//
// Created by Legion on 4/20/2021.
//

#ifndef INC_1_TETL_2_FELADAT_FUNCTIONS_H
#define INC_1_TETL_2_FELADAT_FUNCTIONS_H

#include <stdio.h>
#include "stdbool.h"

typedef struct {
    int maxSize;
    int sp;
    int *items;
} Stack;

Stack *create(int capacity);

void insert(Stack *stack, char n);

void print(Stack* stack, FILE* maganhangzo);

//void destroy(Stack* stack);

//bool isEmpty(Stack *stack);

bool isFull(Stack *stack);

char pop(Stack *stack);

char top(Stack *stack);



#endif //INC_1_TETL_2_FELADAT_FUNCTIONS_H
