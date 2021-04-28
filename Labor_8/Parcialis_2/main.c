#include <stdio.h>
#include "functions.h"

int main() {
    F* f=readfromfile("input.txt");
    kiir(f);
    gyok(f);
    osszeg(f);
    printf("10NEK NAGYOBB? %i", mindeniknagyobbminttiz(f));
    return 0;
}
