#include <stdio.h>
#include "functions.h"
int main() {
    IntArray *array;
    readArray("Input.txt",&array);
    if(!array){
        printf("Failed to read array");
        return -1;
    }
    printArray(array);
    printArrayToFile("ki.txt", array);
    printf("\n");
    sortArray(array);
    int element;
    printf("\nA keresett elem: ");
    scanf("%i",&element);
    int poz=findElement(array,element);

    if(poz>0)
        printf("A helye: %i",findElement(array,element));
    else
        printf("Nincs meg");

    printf("\nA minimum: %i",minimum(array));
    printf("\nA maximum: %i\n",maximum(array));

    fillArray(array,array->size,0,10);
    printArray(array);

    printf("\n");
    deleteElement(array,poz);
    printArray(array);
        return 0;
}
