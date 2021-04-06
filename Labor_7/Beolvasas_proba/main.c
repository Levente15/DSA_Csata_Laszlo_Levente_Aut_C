#include <stdio.h>
#include "functions.h"
int main() {
    Szemely *szemely=readfromfile("be.txt");
    for(int i=0;i<5;i++){
        printf("%s %s %i\n",szemely[i].vnev,szemely[i].knev,szemely[i].kor);
    }
    return 0;
}
