#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main() {
    int n;
    printf("Add meg az n-t: ");
    scanf("%i",&n);
    int* a=(int*)malloc(n*sizeof(int));
    if(!a){
        printf("Hibas a  lefoglalas");
    }
    beker(a,n);
    kiir(a,n);
    int csucs=vizsgalo(a,n);
    printf("A csucs indexe: %i",csucs);
    free(a);

    return 0;
}
