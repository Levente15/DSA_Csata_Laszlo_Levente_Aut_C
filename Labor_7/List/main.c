#include <stdio.h>
#include "functions.h"
int main() {
      /*  NodeType * first=NULL;
        insert(&first,8,0);
        insert(&first,5,0);
        insert(&first,4,0);
        insert(&first,1,0);
        travers(first);*/

        NodeType * first=NULL;
        int n=1458;
        while(n>0){
            insert(&first,n%10,0);
            n/=10;
        }
        travers(first);
        int k;
        printf("\nAdd meg a poziciot: ");
        scanf("%i",&k);
        printf("A adott elemen a szam: %i\n",Digit_k(first,k,0));
        printf("A lista hossa: %i\n",SizeDigit(first,0));
        printf("A szamok novekvo soorendebe vannak-e: %i\n",Ascending(first));

    return 0;
}
