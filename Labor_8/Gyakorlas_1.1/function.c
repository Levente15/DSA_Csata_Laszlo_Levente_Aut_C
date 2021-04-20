//
// Created by Legion on 4/19/2021.
//

#include "function.h"
#include "stdbool.h"
#include "stdlib.h"
#include <stdio.h>
#include "limits.h"

Node *createStack(){

    Node* node=(Node*)malloc(sizeof (Node));

    if(!node){
        printf("Error#1");
        return NULL;
    }
    node->next=NULL;
    return node;
}
Node *readFromFile(char *fileName){

    FILE*fin=fopen(fileName,"rt");

    if(!fin) {
        printf("Error#2");
        return NULL;
    }

    Node *stack=createStack();

    char tmp;

    while(fscanf(fin,"%c ",&tmp)!=EOF){
        if((tmp>='a' && tmp<='z') ||(tmp>='A' && tmp<='Z'))
            push(&stack,tmp);
    }
    return stack;
}
void push(Node **topPtr, char data){
    Node* newnode=createStack();

    if(!newnode){
        printf("Error#3");
        return;
    }
    newnode->data=data;
    newnode->next=(struct Node*)*topPtr;
    *topPtr=newnode;
}
bool isEmpty(Node *topPtr){
    return topPtr->next==NULL;
}
int pop(Node **topPtr){

    if(isEmpty(*topPtr))
        return INT_MIN;

    Node *aux=*topPtr;
    char auxData=aux->data;
    *topPtr=(Node*)aux->next;

    free(aux);

    return auxData;
}