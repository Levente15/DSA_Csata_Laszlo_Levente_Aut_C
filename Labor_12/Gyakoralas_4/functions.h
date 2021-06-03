//
// Created by Legion on 5/30/2021.
//

#ifndef GYAKORALAS_4_FUNCTIONS_H
#define GYAKORALAS_4_FUNCTIONS_H

typedef struct {
    int maxSize;
    int sp;
    char *szo;
} Stack;

Stack *createstack(int capacity);

void push(Stack *stack, char* n);

Stack *readfromfile(char *filename);

char *top(Stack *stack);
char *pop(Stack *stack);
#endif //GYAKORALAS_4_FUNCTIONS_H
