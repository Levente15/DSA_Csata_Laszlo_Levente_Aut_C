//
// Created by Legion on 4/15/2021.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

Ventilator *create(int termekszam, char gyarto[30]) {

    Ventilator *ventilator = (Ventilator *) malloc(sizeof(Ventilator));

    if (!ventilator) {
        printf("Error#1");
        return NULL;
    }
    ventilator->termekszam = termekszam;
    strcpy(ventilator->gyarto, gyarto);

    return ventilator;
}

Ventilator *readfromfile(char *filename) {
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Error#2");
        return NULL;
    }
    int n;
    fscanf(fin, "%i", &n);

    count = n;

    Ventilator *ventilators = (Ventilator *) malloc(n * sizeof(Ventilator));

    int termekszam;
    char gyarto[30];

    for (int i = 0; i < n; i++) {
        fscanf(fin, "%i ", &termekszam);
        fscanf(fin, "%s ", gyarto);

        ventilators[i] = *create(termekszam, gyarto);
    }

    return ventilators;

}

void destroy(Ventilator *ventilator) {
    free(ventilator);
    ventilator = NULL;
}

bool exists(char memory[count][30], char* item) {
    for(int i = 0; i < count; i++)
        if(!strcmp(memory[i], item))
            return true;

    return false;
}

void gyarto(Ventilator *ventilator) {

    char tarolo[25];
    int zsak=0;

    /*
    for(int i=0;i<4;i++) {
        //if (strcmp(tarolo, ventilator[i].gyarto)) {
        strcpy(tarolo, ventilator[i].gyarto);

        for (int j = 0; j < 4; j++) {
            if (!strcmp(tarolo, ventilator[j].gyarto)) {
                zsak++;
            }
        }

        if (zsak > 1)
            printf("%i db %s\n", zsak, tarolo);

//        } else{
//            printf("Nincs 2 egyfroma\n");
//        }
        zsak = 0;
    }
     */

    /// memoization
    char memory[count][30];
    int gyartoCount[count];
    int gyartoIndex = 0;

    for(int i = 0; i < count; i++) {
        for(int j = i; j < count; j++) {
            if(!exists(memory, ventilator[j].gyarto)) {
                strcpy(memory[gyartoIndex], ventilator[j].gyarto);
                gyartoCount[gyartoIndex]++;
            }
        }
    }

}