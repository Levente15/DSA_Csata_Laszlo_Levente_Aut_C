#include <stdio.h>
#include "function.h"
int main() {
    Zoldseg *zoldseg=readfromfile("be.txt");
    for(int i=0;i<4;i++){
        printf("%s %0.2lf %s %i [",zoldseg[i].nev,zoldseg[i].tomeg,
               zoldseg[i].vitamin,zoldseg[i].napokszam);
        for(int j=0;j<7;j++){
            printf("%i ",zoldseg[i].ajanlottszam[j]);
        }
        printf("]\n");
    }

    printf("----------------\n");
 //   legtobb(zoldseg);
    printf("----------------\n");
   // legkevesebb(zoldseg);
    printf("\n\n--Stackel--\n\n");

    Node* topptr=createNode();
    for(int i=0;i<4;i++){
        push(&topptr,&zoldseg[i]);
    }
    pop(&topptr);
    pop(&topptr);
    pop(&topptr);
    pop(&topptr);
    printf("\n Repa kereses \n");
    kiirkaposztat(zoldseg);
    return 0;
}
