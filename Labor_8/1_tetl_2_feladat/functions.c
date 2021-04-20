//
// Created by Legion on 4/20/2021.
//

#include <aclapi.h>
#include "functions.h"
#include "stdlib.h"

Stack *create(int capacity) {

    Stack *stack = (Stack *) malloc(sizeof(Stack));

    if (!stack) {
        printf("Error while allocating stack!");
        return NULL;
    }

    stack->maxSize = capacity;
    stack->sp = -1;
    stack->items = (int *) malloc(stack->maxSize * sizeof(int));

    if (!stack->items) {
        printf("Error while allocating stack items!");
        return NULL;
    }

    return stack;
}

bool isEmpty(Stack *stack) {
    return stack->sp == -1;
}

bool isFull(Stack *stack) {
    return stack->sp == stack->maxSize - 1;
}


char top(Stack *stack) {
    return stack->items[stack->sp];
}

char pop(Stack *stack) {
    int n = top(stack);
//    int n = stack->items[stack->sp];
    stack->sp--;
    return n;
}

void insert(Stack *stack, char n) {
    if (!isFull(stack)) {
        stack->sp++;
        stack->items[stack->sp] = n;
    }
}

void print(Stack *stack, FILE *maganhangzo) {

    if (!stack || !maganhangzo) {
        printf("Hiba");
        return;
    }

    while (!isEmpty(stack)){
        char tmp=pop(stack);

        if(strchr("aeiouAEIOU",tmp))
            fprintf(maganhangzo,"%c ",tmp);

    }
}