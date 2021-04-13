#include <stdio.h>
#include "function.h"


int main() {

    Tomb* tomb=readfromfile("be.txt");

    kiir(tomb);
    ossz(tomb);
    printf("%i",prim(tomb));
    return 0;
}
