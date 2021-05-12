//
// Created by Legion on 5/12/2021.
//

#include "arfolyam.h"
#include <stdio.h>
#include <stdlib.h>

Heap *createHeap(int max) {
    Heap *euro = (struct Heap *) malloc(sizeof(struct Heap));

    if (!euro) {
        printf("Error#!");
        return NULL;
    }
    euro->size = 0;
    euro->maxSize = max;
    euro->data = creatMoney();

    return euro;
}

void insert(Heap *heap, Money *money) {

    heap->size++;
    heap->data[heap->size] = *money;
    up(heap, heap->size);
}

void up(Heap *heap, int i) {
    while (i > 1 && !compare(heap->data[i / 2], heap->data[i])) {
        Money *tmp = heap->data[i / 2];
        heap->data[i / 2] = heap->data[i];
        heap->data[i] = tmp;

        i /= 2;
    }
}

void down(Heap *heap, int i) {
    while (2 * i <= heap->size) {
        int j = 2 * i;

        if (j < heap->size && !compare(heap->data[j], heap->data[j + 1]))
            i++;

        if (!compare(heap->data[j], heap->data[i]))
            break;

        Money *tmp = heap->data[i];
        heap->data[i] = heap->data[j];
        heap->data[j] = tmp;

        i = j;
    }
}

void kupacrendez(Heap *heap, int n) {
    for (int i = n / 2; i >= 1; i--) {
        down(heap, i);

        for (int i = 1; i < n; i++) {
            torolmax(heap);
            down(heap, i);
        }
    }
}

Money *torolmax(Heap *heap) {
    Money *tmp = heap->data[1];
    heap->data[1] = heap->data[heap->size];
    heap->data[heap->size]=tmp;

    heap->size--;
    return tmp;
}
void readfromfile(Heap* heap, char* fileName){

    FILE * fin=fopen(fileName,"rt");

    if(!fin){
        printf("Error#3");
        return;
    }
}