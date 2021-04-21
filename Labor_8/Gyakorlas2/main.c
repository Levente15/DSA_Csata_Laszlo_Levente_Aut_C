#include <stdio.h>
#include "functions.h"

int main() {
    Node* node=NULL;
    readfromfile(&node, "be.txt" );
    traverse(node);
    printf("\nEgy elem kiirasa\n");
    printf("%s ", node->data);
    return 0;
}
