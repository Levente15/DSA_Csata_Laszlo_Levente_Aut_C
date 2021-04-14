//
// Created by Legion on 4/14/2021.
//

#ifndef SZAMOS_FUNCTION_H
#define SZAMOS_FUNCTION_H
#include "stdbool.h"

typedef struct {
    int data;
    struct Node* next;
} Node;

Node* create();
Node* readfromfile(char* filename);

void push(Node** topPtr, int data);

int top(Node* topPtr);
int pop(Node** topPtr);

bool isEmpty(Node* topPtr);

#endif //SZAMOS_FUNCTION_H
