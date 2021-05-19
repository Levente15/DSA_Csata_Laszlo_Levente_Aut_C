//
// Created by Legion on 5/19/2021.
//

#include "function.h"
#include <stdlib.h>
#include "stdio.h"

void beszur(int k, int *T, int m) {
    int j, i = 0;

    do {
        j = (k + i) % m;

        if (T[j] == -1) {
            T[j] = k;
            return;
        } else
            i++;
    } while (i != m);

    printf("Overflow!");
}

int kereses(int k, int *T, int m) {
    int j, i = 0;

    do {
        j = (k + i) % m;

        if (T[j] == k)
            return j;
        else
            i++;
    } while (T[j] != -1 && i != m);

    return -1;
}

void tores(int k, int *T, int m) {

    int j, i = 0;

    do {
        j = (k + i) % m;

        if (T[j] == k) {
            T[j] = -1;
            return;
        } else
            i++;
    } while (T[j] != -1 && i != m);

    if(i != m)
        printf("Element not found! (%i)", k);
}

void kiir(int* T, int m){

    for(int i = 0; i < m; i++)
        printf("%i ", T[i]);
}

