//
// Created by Legion on 5/18/2021.
//

#include "functions.h"
#include "stdlib.h"
#include <stdio.h>

heap *createHeap(int max) {
    heap *h = (heap *) malloc(sizeof(heap));
    h->size = 0;
    h->maxSize = max;
    h->data = (int *) malloc(max * sizeof(int));
    return h;
}

void insert(heap *h, int year, int month, int price) {
    h->size++;
    h->data[h->euro1->year] = year;
    h->data[h->euro1->month] = month;
    h->data[h->euro1->price] = price;
    up(h, h->size);
}

void up(heap *h, int i) {
    int seged;
    while ((i > 1) && (h->data[i / 2]->euro1->price < h->data[i].price)) {
        seged = h->data[i / 2].year;
        h->data[i / 2] = h->data[i].year;
        h->data[i].month = seged;
        i /= 2;
    }
}