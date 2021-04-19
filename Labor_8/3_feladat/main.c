#include <stdio.h>
#include "function.h"

int main() {
    count = 0;

    Ventilator * venti=readfromfile("be.txt");

    printf("%i", count);

    for(int i=0;i<count;i++){
        printf("%i %s\n",venti[i].termekszam,venti[i].gyarto);
    }
     printf("\n");
    gyarto(venti);
    destroy(venti);

    return 0;
}
