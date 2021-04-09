//
// Created by Legion on 4/6/2021.
//

#ifndef TAVK_A_FUNCTION_H
#define TAVK_A_FUNCTION_H

#include <string.h>
#include "stdbool.h"

typedef struct {
    char filmCim[32];
    char mufaj[15];
    double hossz;
    unsigned int vetitesek_szam;
    double *vetitesek;
} Film;

Film *createfilm(char filmcim[32],char mufaj[25], double hossz,int vetitesekszam);
Film *readfromfile(char * filename);


void destroy(Film* film);
void nezesszam(Film* film);
void legkorabbieslegkesobbi(Film* film);

typedef struct {
    Film *film;
    struct Node* next;
} Node;

Node* create();

void insert(Node** front, Film* film, int index);

void printfilm(Film* film);

void traverse(Node* front);

void kiirtipus(Film* film,char* tipus);

typedef struct {
    Film* film;
    struct Node* next;
} NODE;

NODE* createStack();

void push(NODE** topptr,Film* film);

void top(Node* topptr);

void pop(NODE** topptr);

typedef struct {
    Film* film;
    struct Node* next;
}Queue;

Queue * createQueue();

bool isEmptY(Queue* front);
void insertQueue(Queue** front,  Queue** last, Film* film);
void traverseQueue(Queue* front);

#endif //TAVK_A_FUNCTION_H