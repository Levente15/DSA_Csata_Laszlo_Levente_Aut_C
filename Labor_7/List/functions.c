//
// Created by Legion on 3/31/2021.
//
#include "stdlib.h"
#include "stdio.h"
#include "functions.h"
#include "limits.h"
NodeType* create(){
    NodeType *node=(NodeType*)malloc(sizeof (NodeType));
    if(!node){
        printf("Error#1");
        return NULL;
    }
    node->data=INT_MIN;
    node->next=NULL;

    return node;
}
void destroy(NodeType* first){
    if(first->next)
        destroy(first->next);

    free(first);
    first=NULL;
}
void travers(NodeType* first){
    if(!first)
        return;
    printf("%i ",first->data);
    travers(first->next);
}
void insert(NodeType** first, int data, int pos){
    NodeType* node=create();
    node->data=data;
    if(first==NULL ||  pos==0){
        node->next=*first;
        *first=node;
    }else{
        NodeType* p=*first;
        int i=2;
        while(p->next!=NULL && i<pos){
            p=(NodeType *)p->next;
            i++;
        }
        node->next=p->next;
        p->next=(struct NodeType*) node;
    }
}
int Digit_k(NodeType* first, int k, int cur){
    if(k==cur){
        return first->data;
    }
    return Digit_k((NodeType*)first->next,k,cur+1);
}
int SizeDigit(NodeType* first,int size){
    if(!first) {
        return size;
    }
    return SizeDigit((NodeType*)first->next,size+1);
}
bool Ascending(NodeType* first){
    NodeType *tmp=first;
    int val=tmp->data;
    tmp=(NodeType*) tmp->next;
    while (tmp){
        if(tmp->data==val)
            return false;
        val=tmp->data;
        tmp=(NodeType*)tmp->next;
    }
    return true;
}

