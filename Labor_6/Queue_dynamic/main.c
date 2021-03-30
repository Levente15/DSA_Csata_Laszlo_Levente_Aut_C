#include <stdio.h>
#include "functions.h"
int main() {
    NodeType *first;
    NodeType *last;
    first=last=NULL;
    insert(&first,&last,1);
    insert(&first,&last,2);
    insert(&first,&last,3);
     printf("%i ",first->data);
     printf("%i ",first->next);
     printf("%i ",last->data);
    return 0;
}
