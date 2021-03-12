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
    printf("\n");
    int lineariskeres=linearSearch(array,element);
    printf("Linearis kerese\n");
    if(lineariskeres==-1){
        printf("Nincs meg a keresett elem");
    }else{
        printf("A kereesett elem megvan a kovetkezo pozicion: %i",lineariskeres+1);
    }
    printf("\n Binaris kerese\n");
    int start,end;
    int binariskeres=binarySearch(array,start, end, element);
    if(binariskeres==-1){
        printf("Nincs meg a keresett elem");
    }else{
        printf("A keresett elem a kovi pozicioban van: %i",binariskeres+1);
    }
    return 0;
}