//
// Created by Legion on 4/13/2021.
//

#ifndef GYAKORLAS_3_FUNCTION_H
#define GYAKORLAS_3_FUNCTION_H
typedef struct {
    int meret;
    int* elem;
}Tomb;

Tomb* create();

Tomb * readfromfile(char *filename);
void kiir(Tomb* tomb);
void ossz(Tomb* tomb);
#endif //GYAKORLAS_3_FUNCTION_H
