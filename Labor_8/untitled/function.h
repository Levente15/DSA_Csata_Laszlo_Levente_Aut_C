//
// Created by Legion on 4/20/2021.
//

#ifndef UNTITLED_FUNCTION_H
#define UNTITLED_FUNCTION_H

#include <stdio.h>

typedef struct {
    int data;
    struct Node* next;
} Node;

Node* create();

void insert(Node** front, int data, int index);

void print(Node* front,FILE* paros,FILE* paratlan);

void destroy(Node* front);

void traverse(Node* front);

#endif //UNTITLED_FUNCTION_H
