#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {

    IntArray *array;
    readArray("input.txt",&array);

    int element;

    printArray(array);
    fillArray(array, array->size, 0, 50);
    sortArray(array);

    printf("\nA keresett elem:");
    scanf("%i",&element);

    int index = findElement(array, element);
    if (index >= 0)
        printf("\nA helye: %i ; %i.\n", element, index);
    else
        printf("\nNem talalt %i.\n", element);

    deleteElement(array, index);
    printArray(array);

    printf("Minimum: %i\n", minimum(array));
    printf("Maximum: %i\n", maximum(array));

    IntArray *copyArray = (IntArray *) malloc(sizeof(IntArray));
    if (!copyArray) {
        printf("Hiba a masolasnal!");
    } else {
        copyArray->size = 5;
        copy(copyArray, array);
        printArray(copyArray);
    }
    return 0;
}