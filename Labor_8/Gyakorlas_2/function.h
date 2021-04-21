//
// Created by Legion on 4/20/2021.
//

#ifndef FELADAT_1_LINKED_LIST_H
#define FELADAT_1_LINKED_LIST_H

#include <stdbool.h>
#include <stdio.h>

typedef struct {
    char data[44];
    struct Node* next;

} Node;

Node* create();
void readfromfile(Node** node,char * filename);

void insert(Node** front, char szo[44], int index);

void traverse(Node* front);
void destroy(Node* front);


#endif //GYAKORLAS_2_FUNCTION_H
