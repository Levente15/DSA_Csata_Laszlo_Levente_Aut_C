//
// Created by Legion on 3/26/2021.
//
#include "stdbool.h"
#ifndef QUEUE_DYNAMIC_FUNCTIONS_H
#define QUEUE_DYNAMIC_FUNCTIONS_H
typedef struct NodeType{
    int data;
    struct NodeType *next;
}NodeType;

NodeType* create();

bool isEmpty (NodeType* first);
void insert(NodeType** first,NodeType** last,int data);
int delete(NodeType** first);
#endif //QUEUE_DYNAMIC_FUNCTIONS_H
