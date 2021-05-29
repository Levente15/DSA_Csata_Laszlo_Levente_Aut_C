#include <stdio.h>
#include "stdlib.h"

#include "function.h"

int main() {

    int m = 8;
    int n = 7;

    int *array = (int *) malloc(m * sizeof(int));

    for (int i = 0; i < m; i++)
        array[i] = -1;

    for (int i = 0; i < n; i++) {
        int seged;
        printf("array[%i]-> ", i);
        scanf("%i", &seged);

        beszur(seged, array, m);
    }
    kiir(array, m);
    printf("\n");
    int e;
    printf("Add meg a torolni kivant elemet:");
    scanf("%i",&e);
    tores(e,array,m);
    printf("Torles utan: ");
    kiir(array,m);
    int element;
    printf("\nKeresni kivant elem: ");
    scanf("%i",&element);
    int index=kereses(element,array,m);
    printf("Az index: %i",index);
    return 0;
}
