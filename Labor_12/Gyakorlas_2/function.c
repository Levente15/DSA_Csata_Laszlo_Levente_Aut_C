//
// Created by Legion on 5/29/2021.
//

#include "function.h"

#include <stdio.h>
#include <stdlib.h>
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

void push(Node** topPtr, int data,int month,int year) {
    Node* newNode = create();

    if(!newNode) {
        printf("Error while allocating new node!");
        return;
    }

    newNode->data = data;
    newNode->month = month;
    newNode->year = year;
    newNode->next = (struct Node *) *topPtr;
    *topPtr = newNode;
}

void print(Node* node)
{
    if(node->next == NULL)
    {
        return;
    }
    printf("%i-",node->year);
    printf("%i-",node->month);
    printf("%i \n",node->data);
    print((Node *) node->next);
}

Node *ReadFromFile(char* filename) {
    FILE *input = fopen(filename,"r");
    if(!input)
    {
        printf("Sikertelen");
        exit(1);
    }
    int n;
    fscanf(input, "%i\n", &n);
    Node* newNode = NULL;
    int el = 0;
    newNode = create();

    for (int i = 0; i < n; ++i) {
        int year,month,data;
        fscanf(input,"%i",&year);
        fscanf(input,"%i",&month);
        fscanf(input,"%i",&data);
        if(year < 2000  && year > 1900)
        {
            if(el > 5)
            {
                return NULL;
            }
            el++;
            push(&newNode,data,month,year);
          //  printf("%i \",year);
            //insert(&front, front->data+1, year % 10);

        }
    }
    return newNode;

}

Nodelist* createlist() {
    Nodelist* newNodelist = (Nodelist*)calloc(10, sizeof(Nodelist));

    if(!newNodelist) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNodelist->data = INT_MIN;
    newNodelist->next = NULL;

    return newNodelist;
}

void insert( Nodelist** front, int data, int index) {
    Nodelist* newNodelist = createlist();
    newNodelist->data = data;

    if(front == NULL || index == 0) {
        newNodelist->next = (struct Node *) *front;
        *front = newNodelist;
    } else {
        Node* p = (Node *) *front;
        int i = 1;

        while(p->next != NULL && i < index) {
            p = (Node *) p->next;
            i++;
        }

        newNodelist->next = p->next;
        p->next = (struct Node *) newNodelist;
    }
}

void traverse( Nodelist* front) {
    if(!front) {
        printf("\n");
        return;
    }

    printf("%i ", front->data);
    traverse((Nodelist *) front->next);
}