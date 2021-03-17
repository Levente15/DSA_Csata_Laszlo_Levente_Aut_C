//
// Created by Legion on 3/17/2021.
//
#include "function.h"
#include <stdlib.h>
STACK *create(int capacity) {
    STACK *myStack = (STACK *) malloc(sizeof(STACK *));
    //ellenorzes;
    myStack->maxsize = capacity;
    myStack->sp = -1;
    myStack->items = (int *) malloc(myStack->maxsize * sizeof(int));
            //ellenorzes;
            return myStack;
}
int isEmpty(STACK *myStack ){
    return myStack->sp==-1;
}
int isFull(STACK *myStack){
    return myStack->sp==myStack->maxsize-1;
}
void push(STACK *myStack, int a){
    myStack->sp=myStack->sp+1;
    myStack->items[myStack->sp]=a;
}
int pop(STACK* mystack){
    int a =mystack->items[mystack->sp];
    mystack->sp=mystack->sp-1;
    return a;
}
int top(STACK*myStack){
    return myStack->items[myStack->sp];
}
