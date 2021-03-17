//
// Created by Legion on 3/17/2021.
//

#ifndef INC_1_FELADAT_FUNCTION_H
#define INC_1_FELADAT_FUNCTION_H
typedef struct {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
} Matrix;
Matrix *createMatrix(int rows, int cols);

void readMatrix(const char *fileName, Matrix **array);
//tömb tartalmának kiiratása a képernyőre

//void printMatrix(Matrix *array);
void find_elemet(Matrix* array, int element);
void modulus_elemet(Matrix** array);
int number_sum(Matrix** array);
double scattering_matrix(Matrix** array);
#endif //INC_1_FELADAT_FUNCTION_H
