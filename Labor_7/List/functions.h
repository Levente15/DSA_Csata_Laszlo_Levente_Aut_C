//
// Created by Legion on 3/31/2021.
//

#ifndef LIST_FUNCTIONS_H
#define LIST_FUNCTIONS_H
#include "stdbool.h"
typedef struct {
    int data;
    struct Node* next;
}NodeType;
NodeType* create();
void insert(NodeType** first, int data, int pos);
void destroy(NodeType* first);
void travers(NodeType* first);
int Digit_k(NodeType* first, int k,int cur);
int SizeDigit(NodeType* first,int size);
bool Ascending(NodeType* first);
#endif //LIST_FUNCTIONS_H
