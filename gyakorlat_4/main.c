#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "function.h"

int main() {
    srand(time(NULL));
    int n;
    scanf("%i",&n);
    float* a=(float*)malloc(n*sizeof(float));

    for(int i=0;i<n;i++)
    {
        int szamlalo=rand()%100;
        int nevezo=rand()%100;
        a[i]=(float)szamlalo/(float)nevezo;
    }
    rendesen(a,n);
    printf("\n");
   visszafele(a,n);
    free(a);
    return 0;
}
