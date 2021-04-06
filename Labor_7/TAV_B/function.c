//
// Created by Legion on 4/6/2021.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "function.h"
Zoldseg *createZoldseg(char  nev[15],double tomeg, char  vitamin[1],int napokszam, int napiajanlat[7]){
    Zoldseg* zoldseg=(Zoldseg*)malloc(sizeof (Zoldseg));
    if(!zoldseg){
        printf("Error#!");
        return NULL;

        strcpy(zoldseg->nev,nev);
        zoldseg->tomeg=tomeg;
        strcpy(zoldseg->vitamin,vitamin);
        zoldseg->napokszam=napokszam;

    }
}