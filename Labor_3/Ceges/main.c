#include <stdio.h>
#include "functions.h"
int main() {
    //nem mukodik
    FILE* f;
    f=fopen("be.txt","r");
    int n;
    printf("A dolgozok szama: ");
    scanf("%i",&n);
    CEG* a = create(n);
    read_data(a,n,f);
    write_data(a,n);
    return 0;
}
