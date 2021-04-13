//
// Created by Legion on 4/6/2021.
//
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "function.h"
Zoldseg *createZoldseg(char  nev[15],double tomeg, char  vitamin[1],int napokszam){
    Zoldseg* zoldseg=(Zoldseg*)malloc(sizeof (Zoldseg));
    if(!zoldseg) {
        printf("Error#!");
        return NULL;
    }
        strcpy(zoldseg->nev,nev);
        zoldseg->tomeg=tomeg;
        strcpy(zoldseg->vitamin,vitamin);
        zoldseg->napokszam=napokszam;

        zoldseg->ajanlottszam = (int *) malloc(7* sizeof(int));

       if(!zoldseg->ajanlottszam){
            printf("Error#1.2");
            return NULL;
        }

    return zoldseg;
}
Zoldseg * readfromfile(char * filename) {
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Could not open file ");
        return NULL;
    }
    int n;
    fscanf(fin, "%i", &n);
    printf("szam %i\n",n);

    Zoldseg *zoldesegek = (Zoldseg *) malloc(n * sizeof(Zoldseg));
    if (!zoldesegek) {
        printf("Error#2");
        fclose(fin);
        return NULL;
    }
    char nev[15];
    double tomeg;
    char vitamin[1];
    int napokszam;

    for (int i = 0; i < n; i++) {

        fscanf(fin, "%s ", nev);
        //printf("%s ",nev);
        fscanf(fin, "%lf", &tomeg);
        //printf(" %0.2lf",tomeg);
        fscanf(fin, "%s", vitamin);
       // printf(" %s ",vitamin);
        fscanf(fin, "%i", &napokszam);
        //printf(" %i ",napokszam);

        zoldesegek[i] = *createZoldseg(nev, tomeg, vitamin,napokszam);

        for(int j=0;j<7;j++){
            zoldesegek[i].ajanlottszam[j]=rand()%(3-0+1)+0;
           // printf("%lf ",zoldesegek[i].ajanlottszam[j]);
        }

    }
        return zoldesegek;
}
void legtobb(Zoldseg* zoldseg){
    int index=0;
    int szamlalo1=0;
    for(int i=0;i<4;i++){
        printf("%s %0.2lf %s %i [",zoldseg[i].nev,zoldseg[i].tomeg,
               zoldseg[i].vitamin,zoldseg[i].napokszam);
        for(int j=0;j<7;j++){
            printf("%i ",zoldseg[i].ajanlottszam[j]);

            if(zoldseg[i].ajanlottszam[j]>szamlalo1){
                szamlalo1=zoldseg[i].ajanlottszam[j];
            index=j;
            }else{
                continue;
            }

        }
        printf("]\n");
        printf("Legtobb: %i ",szamlalo1);
        printf("Legnagyobb index: %i\n",index);
        printf("\n");
        szamlalo1=0;
        index=0;

        }
}
void legkevesebb(Zoldseg* zoldseg) {
    int index = 0;
    int szamlalo1 = 0;
    for (int i = 0; i < 4; i++) {
        printf("%s %0.2lf %s %i [", zoldseg[i].nev, zoldseg[i].tomeg,
               zoldseg[i].vitamin, zoldseg[i].napokszam);
        for (int j = 0; j < 7; j++) {
            printf("%i ", zoldseg[i].ajanlottszam[j]);

            if (zoldseg[i].ajanlottszam[j] < szamlalo1) {
                szamlalo1 = zoldseg[i].ajanlottszam[j];
                index = j;
            } else {
                continue;
            }

        }
        printf("]\n");
        printf("Legkevesebb: %i ", szamlalo1);
        printf("Legkevesebb index: %i\n", index);
        printf("\n");
        szamlalo1 = 0;
        index = 0;

    }
}
void printZoldseg(Zoldseg* zoldseg){

        printf("%s %0.2lf %s %i [",zoldseg->nev,zoldseg->tomeg,
               zoldseg->vitamin,zoldseg->napokszam);

        for(int j=0;j<7;j++)
            printf("%i ",zoldseg->ajanlottszam[j]);

        printf("]\n");

}
Node* createNode(){
    Node* node=(Node*)malloc(sizeof (Node));
    if(!node){
        printf("Error#1, Stack");
        return NULL;
    }
    node->next=NULL;

    return node;
}
void push(Node** topptr, Zoldseg* zoldseg){
    Node* newnode=createNode();

    if(!newnode){
        printf("Error#2, Stack");
        return;
    }
    newnode->zoldseg=zoldseg;
    newnode->next=*topptr;
    *topptr=newnode;
}
bool isEmpty(Node* topptr){
    return topptr->next==NULL;
}
void top(Node* topptr){
    if(!isEmpty(topptr))
        printZoldseg (topptr->zoldseg);
}
void pop(Node** topptr){

    Node* aux=*topptr;
    Zoldseg * auxdata=aux->zoldseg;
    *topptr=aux->next;

    free(aux);
    printZoldseg(auxdata);
}
void kiirkaposztat(Zoldseg* zoldseg) {
    for (int i = 0; i < 4; i++)
        if (!strcmp(zoldseg[i].nev, "Repa")) {
            printZoldseg(&zoldseg[i]);
            break;
        } else {
            printf("Nincs ilyen zoldseg mar");
            break;
        }
}