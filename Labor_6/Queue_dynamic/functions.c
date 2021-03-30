//
// Created by Legion on 3/26/2021.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

 NodeType* create(){
    NodeType* newNode;
    newNode=(NodeType*)calloc(1,sizeof(NodeType));
    if(!newNode){
        printf("Errot#1");
        return 0;
    }
    newNode->next=NULL;
    newNode->data=INT_MIN;
    return newNode;
}
bool isEmpty (NodeType* first) {
        return first==NULL;
}
void insert(NodeType** first,NodeType** last,int data){
    NodeType* newNode=create();
    if(!newNode){
        printf("Error#2");
        return ;
    }
    newNode->data=data;
    if(isEmpty(*first)){
        *first=*last=newNode;
    }else{
        (*last)->next=(NodeType*)newNode;
        (*last)=newNode;
    }
}
int delete(NodeType** first){
    if(isEmpty(*first))
        return INT_MIN;
    NodeType* aux=*first;
    int auxData=aux->data;
    first=(NodeType**)(*first)->next;
    free(aux);

    return auxData;
}
