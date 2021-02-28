#include <stdio.h>
#include "function.h"
int main() {
    float ax,ay,bx,by;
    printf("Add meg Ax komponenset:");
    scanf("%f",&ax);
    printf("Add meg Ay komponenset: ");
    scanf("%f",&ay);
    printf("Add meg Bx komponenset: ");
    scanf("%f",&bx);
    printf("Add meg By komponenst: ");
    scanf("%f",&by);
    printf("A ket pont kozotti tavolsag: %.2f",tavolsag(ax,ay,bx,by));
    return 0;
}
