//
// Created by Legion on 5/30/2021.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Stack *createstack(int capacity) {
    Stack *stack = (Stack *) malloc(sizeof(Stack));

    if (!stack) {
        printf("Error while allocating stack!");
        return NULL;
    }

    stack->maxSize = capacity;
    stack->sp = -1;
    stack->szo = (char*)malloc(30 * sizeof(char));


    return stack;
}

void push(Stack *stack, char *n) {
    stack->sp++;
    strcpy(&stack->szo[stack->sp], n);
}

Stack *readfromfile(char *filename) {
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Error");
        return NULL;
    }

    int n;
    fscanf(fin, "%i", &n);
    printf("%i\n", n);
    Stack *newstack = createstack(3);
    if (!newstack) {
        printf("Error#1");
        return NULL;
    }

    char* seged = (char*)malloc(30 * sizeof(char));

    for (int i = 0; i < n; i++) {
        fscanf(fin, "%s", seged);
       // printf("%s", seged);
        push(newstack, seged);
    }
    return newstack;
}

char *top(Stack *stack) {
    return &stack->szo[stack->sp];
}

char *pop(Stack *stack) {
    char *n = top(stack);
//    int n = stack->items[stack->sp];
    stack->sp--;
    return n;
}
