//
// Created by Legion on 6/3/2021.
//

#ifndef GYAKORLAS6_BST_H
#define GYAKORLAS6_BST_H

typedef struct BST {
    char data;
    struct BST* left;
    struct BST* right;
} BST;

struct BST* createBST(char data);

void insert(struct BST** tree, char data);

void traverse(struct  BST* tree);

int height(struct BST* tree);

void destroyBST(struct BST* tree);

struct BST* minvalue(struct BST* tree);

struct BST* delete(struct  BST* tree,char data);
#endif //GYAKORLAS6_BST_H