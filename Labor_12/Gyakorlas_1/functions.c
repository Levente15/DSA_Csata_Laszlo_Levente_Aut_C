//
// Created by Legion on 5/29/2021.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>

root *create(int a) {

    root *ag = (root *) (malloc(sizeof(root)));

    if (!ag) {
        printf("Sikertelen lefoglalas");
        return 0;
    }

    ag->adat = a;
    ag->jobb = NULL;
    ag->bal = NULL;

    return ag;
}

void insert(root **fa, int a) {
    if ((*fa) == NULL) {
        (*fa) = create(a);
    } else {
        if ((*fa)->adat > a)
            insert(&((*fa)->bal), a);
        else
            insert(&((*fa)->jobb), a);
    }
}

void inorder(root *fa) {
    if (fa->bal)
        inorder(fa->bal);

    printf("%3d ", fa->adat);

    if (fa->jobb)
        inorder(fa->jobb);
}

void printcurrentlevels(root* fa, int level){
    if (fa==NULL)
        return;
    if(level==1)
        printf("%i ",fa->adat);
    else if(level>1){
        printcurrentlevels(fa->bal, level-1);
        printcurrentlevels(fa->jobb, level-1);
    }
}

int height(root* fa){
    if(fa==NULL)
        return 0;
    else
    {
        int lheight = height(fa->bal);
        int rheight = height(fa->jobb);

        if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);
    }
}

void kiirelozo(root* fa, int data){
    if(fa==NULL)
        return;
    if(fa->bal==NULL)
        return;
    if(fa->jobb==NULL)
        return;

        if(fa->jobb->adat==data || fa->bal->adat==data){
            printf("%i ",fa->adat);
    }else {
            kiirelozo(fa->bal,data);
            kiirelozo(fa->jobb,data);
        }

}