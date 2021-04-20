//
// Created by Legion on 4/19/2021.
//

#ifndef GYAKORLAS_1_1_FUNCTION_H
#define GYAKORLAS_1_1_FUNCTION_H
#include <stdbool.h>

typedef struct {
    char data;
    struct Node *next;
} Node;

Node *createStack();

Node *readFromFile(char *fileName);

void push(Node **topPtr, char data);

bool isEmpty(Node *topPtr);

int pop(Node **topPtr);

#endif //GYAKORLAS_1_1_FUNCTION_H
