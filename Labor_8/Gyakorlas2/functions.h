//
// Created by Legion on 4/21/2021.
//

#ifndef GYAKORLAS2_FUNCTIONS_H
#define GYAKORLAS2_FUNCTIONS_H

typedef struct {
    char data[44];
    struct Node* next;

} Node;

Node* create();
void readfromfile(Node** node,char * filename);

void insert(Node** front, char szo[44], int index);

void traverse(Node* front);
void destroy(Node* front);

#endif //GYAKORLAS2_FUNCTIONS_H
