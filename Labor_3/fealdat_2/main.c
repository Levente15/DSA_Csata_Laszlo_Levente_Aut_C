#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {
    printf("Matrix szorzas\n");
    int n,m;
    scanf("%i",&n);
    scanf("%i",&m);
    int** a=(int**)malloc(n*sizeof(int*));
    int** b=(int**)malloc(m*sizeof(int*));
    int** s=(int**)malloc(m*sizeof(int*));


    feltoltes(a,n);
    printf("\n\n");
    feltoltes1(b,m);
    printf("\n\n");
    szorzas(a,b,n,m,s);

    return 0;
}
