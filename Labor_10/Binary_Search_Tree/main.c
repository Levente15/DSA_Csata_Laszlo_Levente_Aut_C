#include <stdio.h>

#include "function.h"
int main() {
    root *tree = create(20);

    insert(&tree, 10);
    insert(&tree, 30);
    insert(&tree, 15);
    insert(&tree, 25);


    printf("Preorder\n");
    preorder(tree);
    printf("\n");

    printf("Inorder\n");
    inorder(tree);
    printf("\n");

    printf("Postorder\n");
    postorder(tree);
    return 0;
}
