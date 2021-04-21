//
// Created by Legion on 4/20/2021.
//

#include "function.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

Node *create() {
    Node *newNode = (Node *) calloc(1, sizeof(Node));

    if (!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    //newNode->data=data;
    newNode->next = NULL;

    return newNode;
}

void readfromfile(Node **node, char *filename) {
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Hiba a megnyitasnal");
        node = NULL;
        return;
    }

    *node = create();

    char tmp[44];
    int i = 0;
    while (fscanf(fin, "%[^n\n]\n", tmp) != EOF) {

            insert(node, tmp, i);
            i++;
    }

}

void insert(Node **front, char data[44], int index) {
    Node *newNode = create();
    strcpy(newNode->data,data);

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

void traverse(Node *front) {
    while (front->next != NULL) {
        printf("%s ", front->data);
        front = (Node *) front->next;
    }
}

void destroy(Node *front) {
        if (front->next)
            destroy((Node *) front->next);

        free(front);
        front = NULL;
    }

