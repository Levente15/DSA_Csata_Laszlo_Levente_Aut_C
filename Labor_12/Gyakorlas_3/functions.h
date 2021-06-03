//
// Created by Legion on 5/30/2021.
//

#ifndef GYAKORLAS_3_FUNCTIONS_H
#define GYAKORLAS_3_FUNCTIONS_H

typedef struct {
    char* data;
    struct Node* next;
} Node;

Node* create();

void insert(Node** front, char* data);

Node * readfromfile(char* filename);
void traverseLinkedList(Node* node);
int stringToInt(char *word);
#endif //GYAKORLAS_3_FUNCTIONS_H
