#include <stdio.h>
#include "functions.h"


int main() {
    int s;
    FILE *f = fopen("euro.txt", "r");
    fscanf(f, "%i", &s);
    heap *h = createHeap(32);
    int year, month, price;

    for (int i = 1; i <= s; ++i) {
        fscanf(f, "%i", &year);
        fscanf(f, "%i", &month);
        fscanf(f, "%i", &price);
    }
    fclose(f);

    int huf = h->data[1].price/100;
    return 0;
}
