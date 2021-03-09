//
// Created by Legion on 3/9/2021.
//

#ifndef INC_3_FELADAT_FUNCTIONS_H
#define INC_3_FELADAT_FUNCTIONS_H
#endif //INC_3_FELADAT_FUNCTIONS_H
typedef struct {
    int size;
    int* elements;
}IntArray;
IntArray* createArray(int dimension);
void readArray(const char *fileName,IntArray **array);
void printArrayToFile(const char* fileName, IntArray *array);
void printArray(IntArray* array);
void sortArray(IntArray* array);
int seged(const void* a, const void* b);
int findElement(IntArray *array, int element);
int minimum(IntArray* array);
int maximum(IntArray* array);
void fillArray(IntArray * array, int dimension, int first, int last);
void deleteElement(IntArray *array, int element);