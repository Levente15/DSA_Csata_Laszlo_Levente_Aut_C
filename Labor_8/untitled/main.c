#include <stdio.h>
#include "function.h"
int main() {


    int szam;
    printf("Add meg a szamot: ");
    scanf("%i",&szam);

    Node* front=NULL;

    while (szam>0){
        insert(&front,szam%10,0);
        szam/=10;
    }
   // traverse(front);

    FILE *paros=fopen("paros.txt","wt");
    FILE *paratlan=fopen("paratlan.txt","wt");

    if(!paratlan || !paros){
        printf("Hiba a megnyitasnal");
        return 0;
    }
    print(front,paros,paratlan);



    fclose(paros);
    fclose(paratlan);
    destroy(front);
    return 0;
}
