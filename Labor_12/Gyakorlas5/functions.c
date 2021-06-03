//
// Created by Legion on 6/3/2021.
//

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

root *create(char* data) {

    root *ag = (root *) (malloc(sizeof(root)));

    if (!ag) {
        printf("Sikertelen lefoglalas");
        return 0;
    }

    ag->adat =(char*)malloc(30 * sizeof(char));
    ag->jobb = NULL;
    ag->bal = NULL;

    return ag;
}
int stringToInt(char *a) {
    int sum = 0;

    char tmp[30];

    strcpy(tmp, a);

    for (int i = 0; i < strlen(tmp); i++) {
        int n = ((int) tmp[i]) - 64;
        sum += n * n;
    }
   // printf("\nSUM: %i\n",sum);
    return sum;
}

struct root* readfromfile(char* filename){
    FILE*fin=fopen(filename,"rt");

    if(!fin){
        printf("Error#1");
        return NULL;
    }

    int n;
    char *adat=(char*)malloc(30 * sizeof(char));
    int seged=0;
    fscanf(fin,"%i",&n);
    printf("%i\n",n);
    root*tree=create(adat);
    for(int i=0;i<n;i++){
        fscanf(fin,"%s",adat);
       printf("%s\n",adat);
        //printf("%i",seged);
        insert(&tree,adat);
    }
    return tree;
}
void insert(root **fa, char* a) {
    if ((*fa) == NULL) {
        (*fa) = create(a);
    } else {
        if (stringToInt((*fa)->adat) > stringToInt(a))
            insert(&((*fa)->bal), a);
        else
            insert(&((*fa)->jobb), a);
    }
}

void inorder(struct root *fa) {
    if (fa->bal)
        inorder(fa->bal);

    printf("%s \n", fa->adat);

    if (fa->jobb)
        inorder(fa->jobb);
}
