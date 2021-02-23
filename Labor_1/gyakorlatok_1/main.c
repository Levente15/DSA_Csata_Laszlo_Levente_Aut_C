#include <stdio.h>
#include "function.h"

int main() {
    int a, b, c;
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    int maximum = max(a, b, c);
    int minimum = min(a, b, c);

    printf("Maximum:%i \n",maximum);
    printf("Minimum:%i \n",minimum);
    return 0;
}
