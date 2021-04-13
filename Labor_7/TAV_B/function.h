//
// Created by Legion on 4/6/2021.
//

#ifndef TAV_B_FUNCTION_H
#define TAV_B_FUNCTION_H

#include <stdbool.h>

typedef struct{
   char nev[15];
   double tomeg;
   char vitamin[1];
   int napokszam;
   int *ajanlottszam;

}Zoldseg;
Zoldseg *createZoldseg(char  nev[15],double tomeg, char  vitamin[1],int napokszam);
Zoldseg * readfromfile(char * filename);
void destroy(Zoldseg* zoldseg);
void legtobb(Zoldseg* zoldseg);
void legkevesebb(Zoldseg* zoldseg);
void printZoldseg(Zoldseg* zoldseg);

typedef struct {
    Zoldseg * zoldseg;
    struct Node* next;
}Node;

Node* createNode();

void push(Node** topptr, Zoldseg* zoldseg);

void top(Node* topptr);

void pop(Node** topptr);

bool isEmpty(Node* toppptr);

void kiirkaposztat(Zoldseg* zoldseg);
#endif //TAV_B_FUNCTION_H
