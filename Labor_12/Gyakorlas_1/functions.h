//
// Created by Legion on 5/29/2021.
//

#ifndef GYAKORLAS_1_FUNCTIONS_H
#define GYAKORLAS_1_FUNCTIONS_H

typedef struct root {
    int adat;
    struct root *bal;
    struct root *jobb;
} root;

root *create(int a);

void insert(root **fa, int a);

void inorder(root *fa);

void printcurrentlevels(root* fa, int level);

int height(root* fa);

void kiirelozo(root* fa, int data);
#endif //GYAKORLAS_1_FUNCTIONS_H
