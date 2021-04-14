#include <stdio.h>
#include "function.h"
int main() {

    Node *stack=readfromfile("be.txt");


//    while (!isEmpty(stack)) {
//        printf("%c\n", pop(&stack));
//    }
    int ossz=0;
    int db=0;
    printf("\n-------------\n");
    while (!isEmpty(stack)){
        ossz+=pop(&stack);
        db++;
    }
    printf("Az osszeg: %c",ossz/db);


    return 0;
}
