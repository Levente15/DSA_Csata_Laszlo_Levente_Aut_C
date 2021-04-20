//
// Created by Legion on 4/20/2021.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


Node *create() {
    Node *newNode = (Node *) calloc(1, sizeof(Node));

    if (!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNode->data = INT_MIN;
    newNode->next = NULL;

    return newNode;
}

void insert(Node **front, int data, int index) {
    Node *newNode = create();
    newNode->data = data;

    if (front == NULL || index == 0) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node *p = *front;
        int i = 1;

        while (p->next != NULL && i < index) {
            p = (Node *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }

}

void print(Node *front, FILE *paros, FILE *paratlan) {
    if (!front || !paros || !paratlan)
        return;

    if (front->data % 2) {
        fprintf(paratlan, "%i ", front->data);
    } else {
        fprintf(paros, "%i ", front->data);
    }

    print((Node *) front->next,paros,paratlan);

}


void destroy(Node *front) {
        if (front->next)
            destroy((Node *) front->next);

        free(front);
        front = NULL;
}

void traverse(Node* front) {
    if(!front) {
        printf("\n");
        return;
    }

    printf("%i ", front->data);
    traverse((Node *) front->next);
}