//
// Created by Legion on 4/10/2021.
//

#ifndef GYAKORLAS_1_FUNCTIONS_H
#define GYAKORLAS_1_FUNCTIONS_H

#include <stdbool.h>

typedef struct {
    char nev[25];
    char szarmazas[25];
    int erosseg;
    double ar;
    int alapitasiev;
    int raktarban;
    int *napiadagliter;
}Italok;

Italok * createItalok(char nev[25],char szarmazas[25], int erosseg, double ar, int alapitasiev, int raktarban);
Italok * readfromfile(char * filename);

void raktarar(Italok* italok);
void legerosebb(Italok* italok);
void legtobbliteregyheten(Italok* italok);

void kiirItalok(Italok* italok);
void destroy(Italok* italok);


typedef struct {
    Italok* italok;
    struct Node* next;
}Node;

Node* createNode();

void push(Node** topptr, Italok* italok);
void top( Node* topptr);
void pop(Node** topptr);

bool isEmpty(Node* topptr);

//typedef struct {
//    Italok* ital;
//    struct NODE *next;
//}NODE;
//
//NODE* createQueue();
//
//bool IsEmpty(NODE* front);
//
//void insert(NODE** front, NODE** last, Italok ital);
//
//void traverse(NODE* front);
//
//void getIndex(NODE* front, int index, int currPos);

#endif //GYAKORLAS_1_FUNCTIONS_H
