//
// Created by Legion on 4/4/2021.
//

#ifndef BEOLVASAS_PROBA_FUNCTIONS_H
#define BEOLVASAS_PROBA_FUNCTIONS_H
typedef struct {
    char vnev[25];
    char knev[25];
    int kor;
}Szemely;
Szemely * createszemely(char * vnev,char* knev, int kor);
Szemely* readfromfile(char * filename);

#endif //BEOLVASAS_PROBA_FUNCTIONS_H
