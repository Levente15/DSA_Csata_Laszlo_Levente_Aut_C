//
// Created by Legion on 4/21/2021.
//

#include "functions.h"
#include "stdlib.h"
#include "stdio.h"
#include <math.h>
#include <stdbool.h>

F* create(int meret){
    F* f=(F*)malloc(meret*sizeof (F));

    if(!f){
        printf("Hiba#1");
        return NULL;
    }
    f->c=meret;
    f->num=(int*)malloc(meret*sizeof(int));

    if(!f->num){
        printf("Hiba#2");
        return NULL;
        free(f);
    }
    return f;
}
F* readfromfile(char* filename){
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Hiba#3");
        return NULL;
    }
    F* f=create(30);
    int i=0;


    while (fscanf(fin,"%i ",&f->num[i])!=EOF){
        i++;
    }

    return f;

}
void kiir(F* p){
    for(int i=0;i<p->c;i++){
        printf("%i ",p->num[i]);
    }
    printf("\n");
}
void gyok(F* p){
    float szam=0;

    for(int i=0;i<p->c;i++){
        if(p->num[i]%19==0){
            szam=(float )p->num[i];
            break;
        }
    }
    float szam1=0;
    szam1=sqrt(-szam);
    printf("Az elso szam gyoke: %0.1lf",szam1);
}
void osszeg(F* p){
    int osszeg=0;
    int db=0;
    float atlag=0;
    for(int i=0;i<p->c;i++){
        osszeg+=p->num[i];
        db++;
    }
    atlag=(float )(osszeg/db)/2;

    printf("\nAz atlag negyzete: %0.2lf\n",atlag*atlag);
}
bool mindeniknagyobbminttiz(F* p){
    for(int i=0;i<p->c;i++){
        if(p->num[i]<10){}
            return false;
    }
    return true;
}