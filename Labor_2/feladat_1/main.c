#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    scanf("%i", &n);
    int *a = (int *) malloc(n * sizeof(int));
    feltoltes(a, n);
    int keresettelem = rand() % 100;
    clock_t begin = clock();

    int pozicio= lineariskereses(a, n, keresettelem);

    clock_t end = clock();
    double time_spent =  (double)(end - begin)/CLOCKS_PER_SEC;

    printf("\nLefutasi ido: %.5lf\n", time_spent);
    printf("A helye: %i",pozicio);

    return 0;
}
