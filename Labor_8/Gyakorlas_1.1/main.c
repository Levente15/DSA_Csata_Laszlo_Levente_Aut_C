#include <stdio.h>
#include "function.h"

int main() {

    Node* topPtr=readFromFile("be.txt");

    int sum=0;
    int counter=0;

    while (!isEmpty(topPtr)){
        sum+=pop(&topPtr);
        counter++;
    }

    printf("Average: %c",(char )(sum/counter));
    return 0;
}
