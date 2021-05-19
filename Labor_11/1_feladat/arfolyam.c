//
// Created by Legion on 5/12/2021.
//

#include "arfolyam.h"
#include <stdio.h>
#include <stdlib.h>

Heap *createHeap(int max) {
    Heap *heap = (struct Heap *) malloc(sizeof(struct Heap));

    if (!heap) {
        printf("Error#1!");
        return NULL;
    }
    heap->size = 0;
    heap->maxSize = max;
    heap->data = (Money**) malloc(heap->maxSize * sizeof(Money*));
    for(int i=0;i<heap->maxSize;i++){
        heap->data[i]=(Money*)malloc(sizeof (Money));
    }

    return heap;
}

void insert(Heap *heap, Money *money) {

    heap->size++;
    *heap->data[heap->size] = *money;
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
    for (int i = n / 2; i >= 1; i--)
        down(heap, i);

    for (int i = 1; i < n; i++) {
        torolmax(heap);
        down(heap, 1);
    }

}

Money *torolmax(Heap *heap) {
    Money *tmp = heap->data[0];
    heap->data[0] = heap->data[heap->size];
    heap->data[heap->size] = tmp;

    heap->size--;

    return tmp;
}

Heap *readfromfile(char *fileName) {

    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Error#2");
        return NULL;
    }

    int n;
    fscanf(fin, "%i", &n);

    Heap *heap = createHeap(n);

    if (!heap) {
        printf("Error#3");
        return NULL;
    }
    for (int i = 0; i < n; i++) {
        Money *money = creatMoney();

        fscanf(fin, "%i", &money->year);
        fscanf(fin, "%i", &money->month);

        int tmp;
        fscanf(fin, "%i", &tmp);

        money->peni = tmp % 100;
        tmp /= 100;
        money->forint = tmp;

        insert(heap, money);
    }
    fclose(fin);
    fin = NULL;

    return heap;
}