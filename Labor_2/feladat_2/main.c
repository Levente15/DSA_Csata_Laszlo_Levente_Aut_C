#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    scanf("%i",&n);
    int* a=(int*)malloc(sizeof(int));
    feltoltes(a,n);
    kiiras(a,n);
    int elso=0,utolso=n-1;
    int keresettelem;
    printf("Add meg a keresett elemet: ");
    scanf("%i", &keresettelem);
    binariskereses(a,n,keresettelem,elso,utolso);

    return 0;
}
