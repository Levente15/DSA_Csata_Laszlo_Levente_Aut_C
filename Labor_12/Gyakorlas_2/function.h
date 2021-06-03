//
// Created by Legion on 5/29/2021.
//
#ifndef GYAKORLAS_2_FUNCTION_H
#define GYAKORLAS_2_FUNCTION_H

#include <stdbool.h>

typedef struct {
    int year;
    int month;
    int data;
    struct Node *next;
} Node;

Node *create();

void push(Node **topPtr, int data, int month, int year);

Node *ReadFromFile(char *filename);

void print(Node *node);

typedef struct {
    int data;
    struct Node *next;
} Nodelist;

Nodelist *createlist();

void insert(Nodelist **front, int data, int index);

void traverse(Nodelist *front);

#endif //GYAKORLAS_2_FUNCTION_H