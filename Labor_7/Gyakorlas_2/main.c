#include <stdio.h>
#include "function.h"
int main() {

    Tomb * tomb=create(20);
    Feltoltes(&tomb);
    Kiir(tomb);
    int index;
    printf("Add meg az indexet; \n");
    scanf("%i",&index);
    kiirindex(tomb,index);
    return 0;
}
