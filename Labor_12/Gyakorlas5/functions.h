//
// Created by Legion on 6/3/2021.
//

#ifndef GYAKORLAS5_FUNCTIONS_H
#define GYAKORLAS5_FUNCTIONS_H
typedef struct root {
    char *adat;
    struct root *bal;
    struct root *jobb;
} root;

root *create(char* a);

root* readfromfile(char* filename);

void insert(root **fa, char *a);

void inorder(root *fa);

void preorder(root *fa);

void postorder(root *fa);

int stringToInt(char *word);

#endif //GYAKORLAS5_FUNCTIONS_H
