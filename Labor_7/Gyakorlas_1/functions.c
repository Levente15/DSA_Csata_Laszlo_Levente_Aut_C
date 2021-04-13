//
// Created by Legion on 4/10/2021.
//

#include "functions.h"
#include "stdlib.h"
#include "string.h"
#include "stdio.h"


Italok *createItalok(char nev[25], char szarmazas[25], int erosseg, double ar, int alapitasiev, int raktarban) {
    Italok *italok = (Italok *) malloc(sizeof(Italok));

    if (!italok) {
        printf("Error#1");
        return NULL;
    }
    strcpy(italok->nev, nev);
    strcpy(italok->szarmazas, szarmazas);
    italok->erosseg = erosseg;
    italok->ar = ar;
    italok->alapitasiev = alapitasiev;
    italok->raktarban = raktarban;

    italok->napiadagliter = (int *) malloc(7 * sizeof(int));
    if (!italok->napiadagliter) {
        printf("Error#1.2");
        return NULL;
    }

    return italok;
}

Italok *readfromfile(char *filename) {
    FILE *fin = fopen(filename, "rt");
    FILE *fout = fopen("ki.txt", "wt");

    if (!fin) {
        printf("Error#2");
        return NULL;
    }
    if (!fout) {
        printf("Error#2.1");
        return NULL;
    }
    int n;
    fscanf(fin, "%i", &n);
    Italok *italoks = (Italok *) malloc(n * sizeof(Italok));

    if (!italoks) {
        printf("Error#3");
        fclose(fin);
        fin = NULL;
        return NULL;
    }

    char nev[25];
    char szarmazas[25];
    int erosseg = 0;
    double ar = 0;
    int alapitasiev = 0;
    int raktarban = 0;

    for (int i = 0; i < n; i++) {
        fscanf(fin, "%s", nev);
        fscanf(fin, "%s", szarmazas);
        fscanf(fin, "%i", &erosseg);
        fscanf(fin, "%lf", &ar);
        fscanf(fin, "%i", &alapitasiev);
        fscanf(fin, "%i", &raktarban);

        italoks[i] = *createItalok(nev, szarmazas, erosseg, ar, alapitasiev, raktarban);

        for (int j = 0; j < 7; j++) {
            italoks[i].napiadagliter[j] = rand() % 5 - 1 + 1 + 1;
            // printf("%i ",italoks[i].napiadagliter[j]);
        }

        for (int i = 0; i < n; i++) {}
        fprintf(fout, "%s ", nev);
        fprintf(fout, "%s ", szarmazas);
        fprintf(fout, "%i ", erosseg);
        fprintf(fout, "%0.2lf", ar);
        fprintf(fout, "%i ", alapitasiev);
        fprintf(fout, "%i ", raktarban);

        for (int j = 0; j < 7; j++) {
            fprintf(fout, "%i ", italoks[i].napiadagliter[j]);
        }
        fprintf(fout, "\n");
    }
    fclose(fin);

    return italoks;

}

void kiirItalok(Italok *italok) {
    printf("%s %s %i %0.2lf %i %i\n[", italok->nev, italok->szarmazas,
           italok->erosseg, italok->ar, italok->alapitasiev, italok->raktarban);
    for (int j = 0; j < 7; j++) {
        printf(" %i ", italok->napiadagliter[j]);
    }
    printf("]\n");
}


void destroy(Italok *italok) {

    free(italok->nev);
    free(italok->szarmazas);

    free(italok);
    italok = NULL;
}

void raktarar(Italok *italok) {

    double osszeg = 0;

    for (int i = 0; i < 5; i++)
        osszeg += italok[i].ar * italok[i].raktarban;

    printf("---A raktarban az ertek---\n");
    printf("-------%0.2lf EURO--------", osszeg);
}

void legerosebb(Italok *italok) {

    int tarolo = 0;

    for (int i = 0; i < 5; i++) {
        if (italok[i].erosseg > tarolo) {
            tarolo = italok[i].erosseg;
        }
    }

    printf("----A legerosebb ital foka------\n");
    printf("-------------%i-----------------\n", tarolo);
}

void legtobbliteregyheten(Italok *italok) {

    int szamlalo = 0;
    int osszeg = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            szamlalo += italok[i].napiadagliter[j];

            if (szamlalo > osszeg) {
                osszeg = szamlalo;

            }
        }
        szamlalo = 0;
    }
    printf("A legtobb liter a heten: %i\n", osszeg);
    //printf("%s",italok[index].nev);
}

Node *createNode() {
    Node *newnode = (Node *) malloc(sizeof(Node));

    if (!newnode) {
        printf("Error#1 Stack");
        return NULL;
    }

    newnode->next = NULL;

    return newnode;
}

void push(Node **topptr, Italok *italok) {

    Node *newnode = createNode();

    if (!newnode) {
        printf("Error#2 Stack");
        return;
    }

    newnode->italok = italok;
    newnode->next = (struct Node *) *topptr;
    *topptr = newnode;
}

void top(Node *topptr) {

    if (!isEmpty(topptr))

        kiirItalok(topptr->italok);

}

bool isEmpty(Node *topptr) {
    return topptr->next == NULL;
}

void pop(Node **topptr) {

    if(isEmpty(*topptr)) {
        kiirItalok((*topptr)->italok);
    }else {
        Node *aux = *topptr;
        Italok *auxData = aux->italok;
        *topptr = (Node *) aux->next;

        free(aux);

        kiirItalok(auxData);
    }
}

//NODE *createQueue() {
//    NODE *node = (NODE *) malloc(sizeof(NODE));
//
//    if (!node) {
//        printf("Error#1_Queue");
//        return NULL;
//    }
//
//    node->ital = NULL;
//    node->next = NULL;
//
//    return node;
//}
//
//bool IsEmpty(NODE *front) {
//    return front == NULL;
//}
//
//void insert(NODE** front, NODE** last, Italok ital) {
//    NODE *newnode = createQueue();
//
//    if (!newnode) {
//        printf("Failed to create node while inserting data!");
//        return;
//    }
//
//    *(newnode->ital) = ital; //nem tudom mi a franc kell ide.. vegul
//
//    if (IsEmpty(*front))
//        *front = *last = newnode;
//    else {
//        (*last)->next = newnode;
//        (*last) = newnode;
//    }
//}
//
//void traverse(NODE *front) {
//    if (front == NULL)
//        return;
//
//    NODE *next = front;
//
//    while (next != NULL) {
//        kiirItalok(next->ital);
//        next = (NODE *) next->ital;
//    }
//}
//
//void getIndex(NODE *front, int index, int currPos) {
//    if (front == NULL)
//        printf("Empty");
//
//    if (currPos == index)
//        kiirItalok(front->ital);
//}
