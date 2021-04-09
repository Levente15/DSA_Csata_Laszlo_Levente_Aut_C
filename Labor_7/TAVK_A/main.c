#include <stdio.h>
#include "function.h"
int main() {
    Film* films=readfromfile("be.txt");

    for(int i=0;i<3;i++){
        printf("%s %s %0.2lf %i ", films[i].filmCim, films[i].mufaj, films[i].hossz, films[i].vetitesek_szam);

        for(int j = 0; j < films[i].vetitesek_szam; j++)
            printf("%.2lf ", films[i].vetitesek[j]);

        printf("\n");
    }

    nezesszam(films);
    printf("\n");
    legkorabbieslegkesobbi(films);
    printf("\n----------------------\n");

//    Node *front = NULL;
//
//    for(int i=0;i<3;i++)
//        insert(&front,&films[i],i);
//
//    traverse(front);

    printf("\n----------\n");
    char tipus[43];
    printf("Add meg a keresett mufajt: ");
    scanf("%s",&tipus);
    kiirtipus(films,tipus);
    printf("\n----------\n");
    printf("\n----------\n");
    printf("\n----------\n");
    printf("Stack-el megprobaltam hatha megtudom csinalni:))))\n");

    NODE* topptr=createStack();
    for(int i=0;i<3;i++){
        push(&topptr,&films[i]);
    }
    pop(&topptr);
    pop(&topptr);
    pop(&topptr);
    printf("-------------");
    printf("-------------");
    printf("-------------\n");
    printf("Megprobalom sorral, hatha megtudom csinalni:))))\n nem sikerult meg, fejlesztres alatt all a munka");

     Queue* front;
     Queue* last;
    front=last=NULL;
    for(int i=0;i<3;i++){
        insertQueue(&front,&last,&films[i]);
        traverseQueue(front);
    }
    traverseQueue(front);
    return 0;
}
