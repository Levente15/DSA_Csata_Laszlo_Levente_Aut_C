#include <stdio.h>
#include "functions.h"
int main() {

    Italok *italok=readfromfile("Italok.txt");
    for(int i=0;i<5;i++){
        printf("%s %s %i %0.2lf %i %i\n",italok[i].nev,italok[i].szarmazas,
        italok[i].erosseg,italok[i].ar,italok[i].alapitasiev,italok[i].raktarban);
        for (int j = 0; j <0 ; ++j) {
            printf("%i ",italok[i].napiadagliter[j]);
        }
        printf("\n");
    }


    printf("\n***********\n");
    raktarar(italok);

    printf("\n***********\n");
    legerosebb(italok);

    printf("\n***********\n");
    legtobbliteregyheten(italok);

    printf("\n***********\n");

    printf("Stack\n");
   Node *topptr=createNode();
   for(int i=0;i<5;i++) {
       push(&topptr, &italok[i]);
   }
   //printf("\nA legfelso elem:\n");
   //top(topptr);
   printf("-----------\n");
    pop(&topptr);
    pop(&topptr);
    pop(&topptr);
    pop(&topptr);
    pop(&topptr);

    printf("\n***********\n");

    printf("Queue");

//    NODE* front;
//    NODE* last;
//
//    front=last=NULL;
//
//    for(int i=0;i<5;i++){
//        insert(&front,&last,italok[i]);
//    }
//    traverse(front);
//
//    getIndex(front,3,0);


    destroy(italok);
    return 0;
}
