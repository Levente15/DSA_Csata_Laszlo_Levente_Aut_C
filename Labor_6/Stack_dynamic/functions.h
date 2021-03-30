//
// Created by Legion on 3/27/2021.
//

#ifndef STACK_DYNAMIC_FUNCTIONS_H
#define STACK_DYNAMIC_FUNCTIONS_H
typedef struct NodeType{
    int info;
    struct NodeType *next;
}NodeType;
NodeType* create();
void push(NodeType** topPtr, int data);
int top(NodeType*topPtr);
int pop(NodeType**topPtr);
int isEmpty(NodeType *topPtr);
#endif //STACK_DYNAMIC_FUNCTIONS_H
