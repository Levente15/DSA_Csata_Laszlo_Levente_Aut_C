//
// Created by Legion on 6/3/2021.
//

#ifndef GYAKORLAS6_STACK_H
#define GYAKORLAS6_STACK_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct Stack {
    int maxSize;
    int sp;

    char* data;
} Stack;

struct Stack* createStack(int capacity);

bool isEmpty(struct Stack* stack);

bool isFull(struct Stack* stack);

char top(struct Stack* stack);

void pop(struct Stack* stack);

void push(struct Stack* stack, char data);

void destroy(struct Stack* stack);
#endif //GYAKORLAS6_STACK_H
