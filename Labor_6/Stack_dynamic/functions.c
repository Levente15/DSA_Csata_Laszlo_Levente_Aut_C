//
// Created by Legion on 3/27/2021.
//
#include "functions.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "limits.h"
NodeType *create() {
    NodeType *newNode = (NodeType *) malloc(sizeof(struct Node *));
    if(!newNode){
        printf("Error#1");
        return -1;
    }
    newNode->next = NULL;
    return newNode;
}
void push(NodeType** topPtr, int data){
    NodeType *newNode=create();
    if(isEmpty(topPtr)){
        printf("Error#2");
        return ;
    }
    newNode->data=data;
    newNode->next=*topPtr;
    *topPtr=newNode;
}
bool isEmpty(NodeType* topPtr){
    return topPtr->next=NULL;
}
int top(NodeType* topPtr){
    if(!isEmpty(topPtr)){
        return topPtr->data;
    }
}
int pop(NodeType** topPtr){
    if(isEmpty(topPtr)){
        return INT_MIN;
    }
    struct NodeType* aux=*topPtr;
    int auxData=aux->data;
    *topPtr=aux->next;

    free(aux);
    return auxData;
}