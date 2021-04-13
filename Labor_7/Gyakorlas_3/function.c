//
// Created by Legion on 4/13/2021.
//

#include "function.h"
#include "stdlib.h"
#include "stdio.h"

Tomb* create(){
    Tomb * tomb=(Tomb*)malloc(sizeof (Tomb));

    if(!tomb){
        printf("Error#1");
        return NULL;
    }
    tomb->meret=NULL;
    tomb->elem=NULL;

    return tomb;
}
Tomb * readfromfile(char *filename){
    FILE *fin=fopen(filename,"rt");
    Tomb * newtomb=create();

    if(!newtomb){
        printf("Error#2");
        return NULL;
    }
    int n;
    fscanf(fin,"%i",&n);
    newtomb->meret=n;
    newtomb->elem=(int*)malloc(n*sizeof (int));

    if(!newtomb->elem){
        printf("Error#3");
        return NULL;
    }

    int elem;
    for(int i=0;i<newtomb->meret;i++){
        fscanf(fin,"%i",&newtomb->elem[i]);
    }
    return newtomb;
}
void kiir(Tomb* tomb){

    for(int i=0;i<tomb->meret;i++){
        printf("%i ",tomb->elem[i]);
    }
}
void ossz(Tomb* tomb) {

    int ossz=0;
    for (int i = 0; i < tomb->meret; i++) {
        if(tomb->elem[i]%2==0)
        ossz+=tomb->elem[i];
    }
    printf("\nA paros szamok osszege: %i\n",ossz);
}
int checkPrime(int num) {

    if (num <= 1) { return 0; }

    for (int j = 2; j <= num / 2; j++) {
        if (num % j == 0) {
            return 0;
        }
        return 1;
    }
}
int prim(Tomb* tomb){

    int db=0;
    int prime=0;
   for(int i=0;i<tomb->meret;i++){
   prime=checkPrime(tomb->elem[i]);
   if(prime==1)
   prime++;

   }
    return prime;

}