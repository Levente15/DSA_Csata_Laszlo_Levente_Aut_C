#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    clock_t start = clock();
    srand(time(NULL));
    int n;
    scanf("%i",&n);
    int keresettelem=rand()%100;
    int* a=(int*)malloc(n*sizeof(int));
    int elso=0,utolso=n-1;
    feltoltes(a,n);
    kiiras(a,n);
    printf("\nA keresett elem: %i\n",keresettelem);
    qsort(a,n,sizeof(int),seged);
    kiiras(a,n);
    binariskereses(a,n,elso,utolso,keresettelem);
    free(a);
    clock_t stop = clock();
    double elapsed = (double) (stop - start) / CLOCKS_PER_SEC;
    printf("\nTime : %.5f\n", elapsed);
    return 0;
}
