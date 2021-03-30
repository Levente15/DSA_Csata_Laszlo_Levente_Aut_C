//
// Created by Legion on 3/27/2021.
//

#ifndef STACK_DYNAMIC_FUNCTIONS_H
#define STACK_DYNAMIC_FUNCTIONS_H
#include "stdbool.h"
typedef struct NodeType{
    int data;
    struct NodeType *next;
}NodeType;
NodeType* create();
void push(NodeType** topPtr, int data);
int top(NodeType* topPtr);
int pop(NodeType** topPtr);
bool isEmpty(NodeType* topPtr);
#endif //STACK_DYNAMIC_FUNCTIONS_H
