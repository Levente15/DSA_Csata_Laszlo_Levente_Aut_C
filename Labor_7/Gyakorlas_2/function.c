//
// Created by Legion on 4/13/2021.
//

#include "function.h"
#include "stdio.h"
#include "stdlib.h"
Tomb *create(int meret){

    Tomb *tomb=(Tomb*)malloc(sizeof (Tomb));

    if(!tomb){
        printf("Hiba");
        return NULL;
    }

    tomb->meret=meret;
    tomb->elem=(int*)malloc(tomb->meret*sizeof (int ));

    if(!tomb->elem){
        printf("Hiba#2");
        return NULL;
        free(tomb->elem);
    }

    return tomb;
}
void Feltoltes(Tomb** tomb){
    Tomb* newtomb=create(20);

    if(!newtomb){
        printf("Hiba#3");
        return;
    }

    int szamolo=0;
    for(int i=0;i<newtomb->meret;i++){
        newtomb->elem[i]=szamolo;
        szamolo+=2;
    }
    *tomb=newtomb;
}
void Kiir(Tomb* tomb){

    printf("A tomb:\n");
    for(int i=0;i<tomb->meret;i++){
        printf("%i ",tomb->elem[i]);
    }
    printf("\n");
}
void kiirindex(Tomb* tomb, int index){

    int tarolo=0;
    for(int i=0;i<tomb->meret;i++) {
        if (index == i) {
            tarolo=tomb->elem[i];
        }
    }
        printf("Az adott indexen  levo elem: %i\n", tarolo);

}