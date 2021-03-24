//
// Created by Legion on 3/24/2021.
//

#ifndef INC_1_FELADAT_FUNCTIONS_H
#define INC_1_FELADAT_FUNCTIONS_H
#include "stdbool.h"
typedef struct {
    int maxSize;
    int front,rear;
    int* item;
}QUEUE;
QUEUE *create(int capacity);
bool isEmpty(QUEUE* queue);
bool isFull(QUEUE* queue);
void put(QUEUE* queue, int a);
int get(QUEUE* queue);
int Front_Element(QUEUE*queue);
#endif //INC_1_FELADAT_FUNCTIONS_H
