//
// Created by Legion on 4/4/2021.
//
#include <string.h>
#include <math.h>
#include "stdio.h"
#include "stdlib.h"
#include "functions.h"

Film *createfilm(char filmCim[32],char mufaj[25], double hossz,int vetitesek_szam){
    Film* film=(Film*)malloc(sizeof (Film));

    if(!film){
        printf("Error#1");
        return NULL;
    }

    strcpy(film->filmCim,filmCim);
    strcpy(film->mufaj,mufaj);
    film->hossz=hossz;
    film->vetitesek_szam=vetitesek_szam;

    film->vetitesek = (double*)malloc(film->vetitesek_szam * sizeof(double));

    if(!film->vetitesek) {
        printf("Error#1.2");
        return NULL;
    }

    return film;
}
Film *readfromfile(char* filename){
    FILE* fin=fopen(filename,"rt");

    if(!fin){
        printf("Error#2");
        return NULL;
    }

    int n;
    fscanf(fin,"%i",&n);
    printf("A szamok %i\n",n);
    Film* films =(Film*)malloc(n*sizeof(Film));

    if(!films){
        printf("Error#3");
        fclose(fin);
        fin = NULL;
        return NULL;
    }

    char  filmCim[32];
    char mufaj[25];
    double hossz;
    int vetitesek_szam;

    for(int i=0;i<n;i++) {
        fscanf(fin,"%s",filmCim);
        fscanf(fin,"%s",mufaj);
        fscanf(fin,"%lf",&hossz);
        fscanf(fin,"%i",&vetitesek_szam);

        films[i] = *createfilm(filmCim,mufaj,hossz,vetitesek_szam);

        for(int j = 0; j < films[i].vetitesek_szam; j++) {
            fscanf(fin, "%lf", &films[i].vetitesek[j]);
        }
    }

    return films;
}

void destroy(Film* film){
    free(film->filmCim);
    free(film->mufaj);

    free(film->vetitesek);
    film->vetitesek = NULL;

    free(film);
    film=NULL;
}

void nezesszam(Film* film){

    double hossz = 0;
    int ora = 0;
    int percek_jelenlegi;
    int percek = 0;

    for(int i=0; i<3; i++){
        // HIBA
        //hossz += film[i].hossz * film[i].vetitesek_szam;
        ora += floor(film[i].hossz);
        percek_jelenlegi = (film[i].hossz - floor(film[i].hossz)) * 100;

        if(percek_jelenlegi >= 60) {
            ora += percek_jelenlegi / 60;
            percek += percek_jelenlegi % 60;
        } else {
            percek += percek_jelenlegi;
        }

        if(percek >= 60) {
            ora += percek / 60;
            percek = percek % 60; 
        }
    }

    // printf("HOSSZ: %lf \n", hossz);

    /* 
    int percek = (hossz - floor(hossz)) * 100;
    int percek_maradek = percek % 60;
    int ora = (int)hossz + percek / 60;
    */

    printf("A filmek osszhossza: %i:%i", ora, percek);
}
