//
// Created by Legion on 4/4/2021.
//

#ifndef TAV_A_FUNCTIONS_H
#define TAV_A_FUNCTIONS_H

typedef struct {
    char filmCim[32];
    char mufaj[15];
    double hossz;
    unsigned int vetitesek_szam;
    double *vetitesek;
} Film;

Film *createfilm(char filmcim[32],char mufaj[25], double hossz,int vetitesekszam);
Film *readfromfile(char * filename);

void destroy(Film* film);
void nezesszam(Film* film);

#endif //TAV_A_FUNCTIONS_H
