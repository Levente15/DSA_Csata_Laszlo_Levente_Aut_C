#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    scanf("%i", &n);
    int *a = (int *) malloc(n * sizeof(int));
    printf("A tomb: ");
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 201 - 100;
        printf("%i ", a[i]);
    }
    printf("\nParos: %i\n", paros(a, n));
    printf("Paratlan: %i\n", paratlan(a, n));
    printf("Pozitiv: %i\n", pozitiv(a, n));
    printf("Negativ: %i\n", negativ(a, n));

    return 0;
}
