#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    scanf("%i",&n);
    int keresettelem=rand()%100;
    int* a=(int*)malloc(n*sizeof(int));
    int elso=0,utolso=n-1;
    feltoltes(a,n);
    kiiras(a,n);
    printf("\nA keresett elem: %i\n100",keresettelem);
    binariskereses(a,n,keresettelem,elso,utolso);
    free(a);
    return 0;
}
