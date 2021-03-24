#include <stdio.h>
#include "functions.h"

int main() {
    QUEUE *queue = create(4);
    int i;
    do {
        printf("1-Uj elem bevitele a sorba \n2-Elem eltavolitasa a sorbol\n"
               "3-A sorban levo legelso elem\n"
               "4-kilepes\n\n");
        do {
            printf("Add meg az opciot: ");
            scanf("%i", &i);
        } while (i < 0 && i > 3);
        switch (i) {
            int uj;
            case 1:
                printf("Az uj elem: ");
                scanf("%i", &uj);
                put(queue, uj);
                break;
            case 2:
                printf(" %i \n", get(queue));
                break;
            case 3:
                printf("%i \n", Front_Element(queue));
                break;
        }
    } while (i!=4);

    return 0;
}
