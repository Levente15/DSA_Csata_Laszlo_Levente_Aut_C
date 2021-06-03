//
// Created by Legion on 6/3/2021.
//

#include "bst.h"
#include <stdio.h>
#include <stdlib.h>

struct BST *createBST(char data) {
    struct BST *tree = (struct BST *) malloc(sizeof(struct BST));

    if (!tree) {
        printf("Hiba a memoria allokacioban! (BST#1)");
        return NULL;
    }

    tree->data = data;
    tree->left = tree->right = NULL;

    return tree;
}

void insert(struct BST **tree, char data) {
    if (*tree == NULL) {
        *tree = createBST(data);
        return;
    }

    if ((*tree)->data > data)
        insert(&((*tree)->left), data);
    else if ((*tree)->data < data)
        insert(&((*tree)->right), data);
}

void traverse(struct BST *tree) {
    if (!tree)
        return;

    traverse(tree->left);

    printf("%c ", tree->data);
    traverse(tree->right);
}

int height(struct BST* tree){
    if(tree==NULL)
        return 0;

    int lheight=height(tree->left);
    int rheight=height(tree->right);

    if(lheight>rheight)
        return lheight+1;
    else
        return rheight+1;
}

void destroyBST(struct BST* tree){
    if(!tree)
        return;

    destroyBST(tree->left);

    free(tree);

    destroyBST(tree->right);
}

struct BST* minvalue(struct BST* tree) {
    struct BST *current = tree;

    while (current && current->left!=NULL)
        current=current->left;

    return current;
}
struct BST* delete(struct  BST* tree,char data){
    if(tree==NULL)
        return NULL;

    if(data<tree->data)
        tree->left=delete(tree->left,data);

    else if(data>tree->data)
        tree->right=delete(tree->right,data);

    else {

        if(tree->left == NULL) {
            struct BST* tmp = tree->right;
            free(tree);
            return tmp;
        } else if(tree->right == NULL) {
            struct BST* tmp = tree->left;
            free(tree);
            return tmp;
        }

        struct BST* tmp = minvalue(tree);

        tree->data = tmp->data;

        tree->right = delete(tree->right, data);
    }

    return tree;
}
