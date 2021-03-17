#include <stdio.h>
#include "function.h"
int main() {
    STACK *mystack;
    mystack=create(10);
    for(int i=0;i<=10;i++){
        if(!isFull(mystack)){
            push(mystack,i);
        }
    }
    while(!isEmpty(mystack)){
        printf("%i ",pop(mystack));
    }
    return 0;
}
