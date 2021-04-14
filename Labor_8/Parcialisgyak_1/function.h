//
// Created by Legion on 4/14/2021.
//

#ifndef PARCIALISGYAK_1_FUNCTION_H
#define PARCIALISGYAK_1_FUNCTION_H
typedef struct {
  char data;
  struct Node* next;
}Node;

Node* create();

Node* readfromfile(char* filename,Node** Nagybetu, Node** Kisbetu);

void insert(Node** front, char data,int index);

void traverse(Node* front);
#endif //PARCIALISGYAK_1_FUNCTION_H

