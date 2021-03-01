#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    clock_t start = clock();
    srand(time(NULL));
    int n;
    scanf("%i", &n);

    int *a = (int *) malloc(n * sizeof(int));
    feltoltes(a, n);
    int keresettelem = rand() % 100;

    printf("\nA helye: %i", lineariskereses(a, n, keresettelem));
    clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nLefutasi ido: %.5f\n", elapsed);

    return 0;
}
