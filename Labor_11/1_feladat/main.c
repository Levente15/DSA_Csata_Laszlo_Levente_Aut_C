#include <stdio.h>
#include "arfolyam.h"

int main() {

    Money *money = creatMoney();
    money->year = 1999;
    money->month = 1;
    money->forint = 249;
    money->peni = 33;


    Heap *heap = createHeap(10);
    insert(heap, money);

    for (int i = 0; i < heap->size; i++)
        printf("%i", heap->data[i]->forint);
    return 0;
}
