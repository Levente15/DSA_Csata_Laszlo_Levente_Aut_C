#include <stdio.h>
#include "function.h"

int main() {


    P *p = readfromfile("input.txt");

    kiir(p);
    //printf("Count: %i", count);
    kiiratlagfele(p);
    paratlanszam(p);
    printf("\nMinden szam pozitiv? %i\n",mindenpozitiv(p));
   printf("------Verem-----\n");
    NType * nType=readfromfileNtype("input.txt");
    kiirstack(nType);
    printf("\n");
    atlag(nType);
    printf("Minden szam pozitiv? %i", mindenszampozitiv(nType));
    paratlanszamverem(nType);

    return 0;
}
