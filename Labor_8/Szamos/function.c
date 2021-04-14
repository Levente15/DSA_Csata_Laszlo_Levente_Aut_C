//
// Created by Legion on 4/14/2021.
//

#include "function.h"
#include "stdlib.h"
#include "stdio.h"
#include "limits.h"

Node* create() {
    Node* node = (Node*)malloc(sizeof(Node));

    if(!node) {
        printf("Error while allocating node!");
        return NULL;
    }

    node->next = NULL;

    return node;
}
Node* readfromfile(char* filename){

    FILE *fin = fopen(filename, "rt");
    Node* stack=create();

    if (!fin) {
        printf("Failed to open file: %s", filename);
        return NULL;
    }
    int elem;
    while (fscanf(fin,"%c ",&elem)!=EOF){
        push(&stack,elem);
    }

    return stack;


}
void push(Node** topPtr, int data) {
    Node* newNode = create();

    if(!newNode) {
        printf("Error while allocating new node!");
        return;
    }

    newNode->data = data;
    newNode->next = *topPtr;
    *topPtr = newNode;
}

bool isEmpty(Node* topPtr) {
    return topPtr->next == NULL;
}
int top(Node* topPtr) {
    if(!isEmpty(topPtr))
        return topPtr->data;
}

int pop(Node** topPtr) {
    if(isEmpty(*topPtr))
        return INT_MIN;

    Node* aux = *topPtr;
    int auxData = aux->data;
    *topPtr = aux->next;

    free(aux);

    return auxData;
}