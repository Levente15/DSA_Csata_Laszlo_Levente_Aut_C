#include <stdio.h>
#include <stdlib.h>
#include <time.h>;

#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    float* a=(float*)malloc(n*sizeof(float));
    printf("A tomb");
    for(int i=0;i<n;i++)
    {
        int szamlalo=rand()%100;
        int nevezo=rand()%100;
        a[i]=(float)szamlalo/(float)nevezo;
        printf(" %.2f ",a[i]);
    }

    printf("\nAz oszeg: %0.2f\n", osszeg(a,n));
    printf("Az szorzat: %0.2f\n", szorzat(a,n));
    printf("Az atlag: %0.2f\n", atlag(a,n));


    free(a);
    return 0;
}
