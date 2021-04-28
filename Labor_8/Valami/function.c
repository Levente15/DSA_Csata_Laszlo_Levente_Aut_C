//
// Created by Legion on 4/21/2021.
//

#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

P* create(int meret){
    P* p=(P*)malloc(meret*sizeof (P));

    if(!p){
        printf("Hiba#1");
        return NULL;
    }
    p->nr=meret;
    p->numbers=(int *)malloc(meret*sizeof (int));

    if(!p->numbers){
        printf("Hiba#2");
        free(p);
        return NULL;
    }

    return p;
}


P *readfromfile(char *filename) {

    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Hiba#3");
        return NULL;
    }
    P* p=create(30);
    int i=0;


    while (fscanf(fin,"%i ",&p->numbers[i])!=EOF){
        i++;
    }

    return p;

}
void kiir(P* p){
    for(int i=0;i<p->nr;i++){
        printf("%i ",p->numbers[i]);
    }
    printf("\n");
}
void kiiratlagfele(P* p){

    float osszeg=0;
    int db=0;
    for(int i=0;i<p->nr;i++){
     osszeg+=p->numbers[i];
     db++;
    }
    printf("\nAz atlag fele: %0.2lf\n",((float )(osszeg/db))/2);
}
bool mindenpozitiv(P* p){
    for(int i=0;i<p->nr;i++)
        if(p->numbers[i]<0)
            return false;

    return true;
}
int paratlanszam(P* p){

    int db=0;
    for(int i=0;i<p->nr;i++){
        if(p->numbers[i]%2!=0){
            db++;
        }
    }
    printf("A paratlan szamok szama: %i", db);
}

NType* createNType(){
    NType* newntype = (NType*)malloc(sizeof(NType));

    if(!newntype) {
        printf("Error while allocating node!");
        return NULL;
    }
    newntype->k=NULL;

    return newntype;
}
NType* readfromfileNtype(char *filename){
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Hiba#3");
        return NULL;
    }

    NType* nType=createNType();
    int seged;

    while (fscanf(fin,"%i ",&seged)!=EOF){
        push(&nType,seged);
    }
    return nType;

}

void push(NType** verem, int n){
    NType* newNType = createNType();

    if(!newNType) {
        printf("Error while allocating new node!");
        return;
    }

    newNType->n = n;
    newNType->k = *verem;
    *verem = newNType;
}
bool isEmpty( NType* topPtr) {
    return topPtr->k == NULL;
}
int pop(NType** verem){

    if(verem==NULL)
        return INT_MIN;

    NType* aux = *verem;
    int auxData = aux->n;
    *verem = aux->k;

    free(aux);

    return auxData;
}
void kiirstack(NType* verem){
    if(verem==NULL)
        return;

    printf("%i ", verem->n);
    if(verem->k) {
        kiirstack(verem->k);
    }
}
float atlag(NType* verem){

    NType* seged=verem;

    float osszeg=0;
    int db=0;

    while (seged->k!=NULL) {
        osszeg += seged->n;
        seged=seged->k;
        db++;
    }
    return (osszeg/(float )db)/2;
}
bool mindenszampozitiv(NType* verem){
    NType* seged=verem;

    while(seged->k!=NULL){
        if(seged->n<0)
            return false;
        seged=seged->k;
    }
    return true;
}
int paratlanszamverem(NType* verem){
    NType* seged=verem;

    int db=0;
    while(seged->k!=NULL){
        if(seged->n%2!=0)
            db++;
    }
    printf("\nA paratlan szamok osszege; %i\n",db);

}


