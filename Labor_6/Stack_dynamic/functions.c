//
// Created by Legion on 3/27/2021.
//
#include "functions.h"
#include "stdio.h"
#include "stdlib.h"
NodeType *create() {
    NodeType *newNode = (NodeType *) malloc(sizeof(struct Node *));
    if(!newNode){
        printf("Error#1");
        return -1;
    }
    newNode->next = NULL;
    return newNode;
}
void push(NodeType **topPtr, int data) {
    NodeType *newNode = create();
    newNode->info = data;
    newNode->next = *topPtr;
    *topPtr=newNode;
}
int top(NodeType*topPtr)
{    if(!isEmpty(topPtr)) {
        return topPtr->info;
    }
}
int pop(NodeType**topPtr) {
    int auxinfo;
    if (!isEmpty(topPtr)) {
        NodeType *aux;

        aux = *topPtr;
        *topPtr = aux->next;
        auxinfo = aux->info;

        free(aux);
    }
        return auxinfo;

}