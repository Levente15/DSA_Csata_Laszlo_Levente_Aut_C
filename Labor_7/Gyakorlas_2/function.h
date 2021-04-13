//
// Created by Legion on 4/13/2021.
//

#ifndef GYAKORLAS_2_FUNCTION_H
#define GYAKORLAS_2_FUNCTION_H
typedef struct {
    int meret;
    int* elem;
}Tomb;

Tomb *create(int meret);
void Feltoltes(Tomb** tomb);
void Kiir(Tomb* tomb);
void kiirindex(Tomb* tomb, int index);
#endif //GYAKORLAS_2_FUNCTION_H
