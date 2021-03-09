#include <stdio.h>
#include "function.h"
int main() {
    FILE *fp;
    fp = fopen("be.txt", "r");

    int n;
    printf("A dolgozok szama: ");
    scanf("%i",&n);

    CEG* a = create(n);
    read_data(a,n,fp);
    write_data(a,n);
    return 0;
}
