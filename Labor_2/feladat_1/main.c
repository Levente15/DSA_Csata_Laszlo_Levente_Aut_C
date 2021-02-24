#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    scanf("%i",&n);

    int* a=(int*)malloc(n*sizeof(int));
    feltoltes(a,n);
    int keresettelem;
    printf("Add meg a keresett elemet:");
    scanf("%i",&keresettelem);
    kiiras(a,n);
    lineariskereses(a,n,keresettelem);


    return 0;
}
