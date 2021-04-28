//
// Created by Legion on 4/28/2021.
//

#ifndef BINARY_SEARCH_TREE_FUNCTION_H
#define BINARY_SEARCH_TREE_FUNCTION_H


typedef struct root{
    int adat;
    struct  root* bal;
    struct rooot* jobb;
}root;

root* create(int a);

void insert(root** fa, int a);

void inorder(root *fa);
void preorder(root *fa);
void postorder(root *fa);
#endif //BINARY_SEARCH_TREE_FUNCTION_H
