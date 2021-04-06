//
// Created by Legion on 4/4/2021.
//

#include <aclapi.h>
#include "functions.h"
#include "stdio.h"
#include "stdlib.h"

Szemely *createszemely(char *vnev, char *knev, int kor) {
    Szemely *szemely = (Szemely *) malloc(sizeof(Szemely));
    if (!szemely) {
        printf("Error1!");
        return NULL;
    }

    strcpy(szemely->vnev,vnev);
    strcpy(szemely->knev,knev);
    szemely->kor = kor;

    return szemely;
}

Szemely *readfromfile(char *filename) {
    FILE *fin = fopen(filename, "rt");
    FILE *fout = fopen("ki.txt", "wt");
    if (!fin) {
        printf("Error2");
        return NULL;
    }
    int n;
    fscanf(fin, "%i", &n);
    printf("A SZAM: %i\n", n);
    Szemely *szemelyek = (Szemely *) malloc(n * sizeof(Szemely));
    if (!szemelyek) {
        printf("Error3");
        return NULL;
    }
    char vnev[25];
    char knev[25];
    int kor;
    for (int i = 0; i < n; i++) {
        fscanf(fin, "%s", vnev);
        fscanf(fin, "%s", knev);
        fscanf(fin, "%i", &kor);

        szemelyek[i] = *createszemely(vnev, knev, kor);

        fprintf(fout,"%s ",vnev);
        fprintf(fout,"%s ",knev);
        fprintf(fout,"%i\n",kor);
    }
    return szemelyek;
    fclose(fin);
    fclose(fout);
    fin=NULL;
    fout=NULL;
}

