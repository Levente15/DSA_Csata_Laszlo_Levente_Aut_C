//
// Created by Legion on 4/15/2021.
//

#ifndef INC_3_FELADAT_FUNCTION_H
#define INC_3_FELADAT_FUNCTION_H

int count;

typedef struct {

    int termekszam;
    char gyarto[30];

}Ventilator;

Ventilator * create(int termekszam, char gyarto[30]);

Ventilator *readfromfile(char* filename);

void gyarto(Ventilator* ventilator);

void destroy(Ventilator* ventilator);
#endif //INC_3_FELADAT_FUNCTION_H
