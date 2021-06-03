//
// Created by Legion on 5/30/2021.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Node *create() {
    Node *newNode = (Node *) calloc(10, sizeof(Node));

    if (!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    strcpy(newNode->data, newNode->data);
    newNode->next = NULL;

    return newNode;
}

void insert(Node **front, char* data) {
    Node *newNode = create();
    strcpy(newNode->data, newNode->data);

    if (*front == NULL || stringToInt((*front)->data) >= stringToInt(newNode->data)) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node *p = *front;

        while (p->next != NULL && (int) ((Node *) (p->next))->data <= stringToInt(newNode->data))
            p = (Node *) p->next;

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }
}

Node *readfromfile(char *filename) {
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Error#2");
        return NULL;
    }

    Node *newnode = create();
    if (!newnode) {
        printf("Error!");
        return NULL;
    }

    int n;
    fscanf(fin, "%i ", &n);
    printf("%i ", n);

    char szo[30];

    for (int i = 0; i < n; i++) {
        fscanf(fin, "%s", szo);
        printf("\n%s", szo);

        insert(&newnode, );
        traverseLinkedList(newnode);
    }
    return newnode;

}

void traverseLinkedList(Node *node) {
    if (node == NULL) {
        printf("\n");
        return;
    }

    printf("%s", node->data);
    traverseLinkedList((Node *) node->next);
}
int stringToInt(char *word) {
    int sum = 0;

    char tmp[30];

    strcpy(tmp, word);


    for (int i = 0; i < strlen(tmp); i++) {
        int n = ((int) tmp[i]) - 64;
        sum += n * n;
    }

    return sum;
}