//
// Created by Legion on 3/10/2021.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "functions.h"
int seged(const void* a, const void* b){
    return *(int*)a-*(int*)b;
}
IntArray *createArray(int dimension) {
    IntArray *array = (IntArray *) malloc(sizeof(dimension));

    if (!array) {
        printf("Hiba1!");
        return NULL;
    }

    array->size = dimension;
    array->elements = (int *) malloc(dimension * sizeof(int));

    if (!array->elements) {
        printf("Hiba2");
        free(array);
        return NULL;
    }

    return array;
}

int findElement(IntArray *array, int element) {
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] == element)
            return i;

    return -1;
}

int minimum(IntArray *array) {
    int min = array->elements[0];
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] < min)
            min = array->elements[i];
    return min;
}

int maximum(IntArray *array) {
    int max = array->elements[0];
    for (int i = 0; i < array->size; i++)
        if (array->elements[i] > max)
            max = array->elements[i];
    return max;
}

void readArray(const char *fileName, IntArray **array) {
    FILE *fin = fopen(fileName, "rt");

    if (!fin) {
        printf("Hiba3! (%s)", fileName);
        return;
    }

    int n;
    fscanf(fin, "%i", &n);
    IntArray *temps = createArray(n);
    if(!temps){
        fclose(fin);
        return;
    }

    for (int i = 0; i <temps->size; i++) {
        fscanf(fin, "%i",&temps->elements[i]);
    }
    (*array)=temps;
    fclose(fin);
}

void fillArray(IntArray *array, int dimension, int first, int last) {
    srand(time(NULL));

    for (int i = 0; i < dimension; i++)
        array->elements[i] = (rand() % last + 1) + first;
}

void printArray(IntArray *array) {
    for (int i = 0; i < array->size; i++)
        printf("%i ", array->elements[i]);
    printf("\n");
}

void printArrayToFile(const char *fileName, IntArray *array) {
    FILE *fout = fopen(fileName, "wt");

    if (!fout) {
        printf("Hiba3!");
        return;
    }

    fprintf(fout, "%i\n", array->size);
    for (int i = 0; i < array->size; i++)
        fprintf(fout, "%i ", array->elements[i]);
}

void sortArray(IntArray *array) {

    qsort(array->elements,array->size,sizeof(int),seged);
    for (int i = 0; i < array->size; i++){
         printf("%i ",array->elements[i]);
    }
}

void deleteElement(IntArray *array, int element) {
    int index = findElement(array, element);

    if (index == -1)
        return;

    for (int i = index; i < array->size - 1; i++)
        array->elements[i] = array->elements[i + 1];

    array->elements[array->size - 1] = 0;
    array->size--;
}

void copy(IntArray *arrayTo, IntArray *arrayFrom) {
    if (!arrayFrom || arrayTo->size > arrayFrom->size)
        return;
    arrayTo->elements = (int *) malloc(arrayTo->size * sizeof(int));
    for (int i = 0; i < arrayTo->size; i++)
        arrayTo->elements[i] = arrayFrom->elements[i];
}
#include "functions.h"
