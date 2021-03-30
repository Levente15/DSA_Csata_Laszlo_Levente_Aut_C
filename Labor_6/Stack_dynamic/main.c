#include <stdio.h>
#include "functions.h"
int main() {
    NodeType* topPtr=create();
    if(!topPtr){
        printf("Error#3");
        return 0;
    }
    push(&topPtr,4);
    push(&topPtr,3);
    push(&topPtr,2);
    push(&topPtr,1);
    printf("%i",pop(&topPtr));

    return 0;
}
