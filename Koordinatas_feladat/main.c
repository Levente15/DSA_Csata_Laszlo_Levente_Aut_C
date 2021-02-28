#include <stdio.h>
#include "function.h"
int main() {
    float ax,ay,bx,by;
    printf("ax=");
    scanf("%f",&ax);
    printf("ay=");
    scanf("%f",&ay);
    printf("bx=");
    scanf("%f",&bx);
    printf("by=");
    scanf("%f",&by);
    printf("A tavolsag: %.2f", tavolsag(ax,ay,bx,by));
    return 0;
}
