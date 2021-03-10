//
// Created by Legion on 3/10/2021.
//

#ifndef INC_1_FELADAT_FUNCTIONS_H
#define INC_1_FELADAT_FUNCTIONS_H
typedef struct {
    int rows; // sorok száma
    int cols; // oszlopok száma
    int **data; //
} Matrix;
Matrix *createMatrix(int rows, int cols);
void readMatrix(const char *fileName, Matrix **array);
//tömb tartalmának kiiratása a képernyőre
void printMatrix(Matrix *array);
#endif //INC_1_FELADAT_FUNCTIONS_H
