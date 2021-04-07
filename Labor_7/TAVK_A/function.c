//
// Created by Legion on 4/6/2021.
//

#include "function.h"
#include <string.h>
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

Film *createfilm(char filmCim[32], char mufaj[25], double hossz, int vetitesek_szam) {
    Film *film = (Film *) malloc(sizeof(Film));

    if (!film) {
        printf("Error#1");
        return NULL;
    }

    strcpy(film->filmCim, filmCim);
    strcpy(film->mufaj, mufaj);
    film->hossz = hossz;
    film->vetitesek_szam = vetitesek_szam;

    film->vetitesek = (double *) malloc(film->vetitesek_szam * sizeof(double));

    if (!film->vetitesek) {
        printf("Error#1.2");
        return NULL;
    }

    return film;
}

Film *readfromfile(char *filename) {
    FILE *fin = fopen(filename, "rt");

    if (!fin) {
        printf("Error#2");
        return NULL;
    }

    int n;
    fscanf(fin, "%i", &n);
    printf("A szamok %i\n", n);
    Film *films = (Film *) malloc(n * sizeof(Film));

    if (!films) {
        printf("Error#3");
        fclose(fin);
        fin = NULL;
        return NULL;
    }

    char filmCim[32];
    char mufaj[25];
    double hossz;
    int vetitesek_szam;

    for (int i = 0; i < n; i++) {
        fscanf(fin, "%s", filmCim);
        fscanf(fin, "%s", mufaj);
        fscanf(fin, "%lf", &hossz);
        fscanf(fin, "%i", &vetitesek_szam);

        films[i] = *createfilm(filmCim, mufaj, hossz, vetitesek_szam);

        for (int j = 0; j < films[i].vetitesek_szam; j++) {
            fscanf(fin, "%lf", &films[i].vetitesek[j]);
        }
    }

    return films;
}

void destroy(Film *film) {
    free(film->filmCim);
    free(film->mufaj);

    free(film->vetitesek);
    film->vetitesek = NULL;

    free(film);
    film = NULL;
}

void nezesszam(Film *film) {

    double ora = 0;
    int db = 0;
    int keres = 0;

    for (int i = 0; i < 3; i++) {
        ora += film[i].hossz * film[i].vetitesek_szam;
        //printf("ORA: %0.2lf\n", ora);
        keres = ((ora - (floor(ora))) * 100) + 1;
        //printf("Perc: %i\n", keres);
        if (keres > 60) {
            keres -= 60;
            db++;
        }
        //printf("Perc: %i\n", keres);
    }
    printf("\nA filmek osszhossza: %i ora %i perc\n\n", (int) ora + db, keres);
}

void legkorabbieslegkesobbi(Film *film) {

    double tarolo=0;
    int db=0;

    for (int i = 0; i < 3; i++) {
        printf("%s %s %0.2lf %i ", film[i].filmCim, film[i].mufaj, film[i].hossz, film[i].vetitesek_szam);

        for (int j = 0; j < film[i].vetitesek_szam; j++) {
            printf("%.2lf ", film[i].vetitesek[j]);
            db++;
        }
        tarolo=film[i].vetitesek[db-1]-film[i].vetitesek[0];
        printf("%0.2lf ",tarolo);
        db=0;
        //tarolo=0;
        printf("\n");
    }
}

Node *create() {
    Node *newNode = (Node *) calloc(1, sizeof(Node));

    if (!newNode) {
        printf("Error while allocating newNode!");
        return NULL;
    }

    newNode->film = NULL;
    newNode->next = NULL;

    return newNode;
}

void insert(Node **front, Film* film, int index) {
    Node *newNode = create();
    newNode->film = film;

    if (front == NULL || index == 0) {
        newNode->next = (struct Node *) *front;
        *front = newNode;
    } else {
        Node *p = *front;
        int i = 1;

        while (p->next != NULL && i < index) {
            p = (Node *) p->next;
            i++;
        }

        newNode->next = p->next;
        p->next = (struct Node *) newNode;
    }
}

void printFilm(Film* film) {
    printf("%s %s %0.2lf %i ", film->filmCim, film->mufaj, film->hossz, film->vetitesek_szam);

    for(int j = 0; j < film->vetitesek_szam; j++)
        printf("%.2lf ", film->vetitesek[j]);

    printf("\n");
}

void traverse(Node *front) {
    if(!front) {
        printf("\n");
        return;
    }

    printFilm(front->film);
    traverse((Node*) front->next);
}
void kiirtipus(Film* film,char*tipus){
    for(int i=0;i<3;i++)
    if(!strcmp(film->mufaj,tipus)){
       printf("A film cime: %s", film[i].filmCim);
        break;
    }
}

