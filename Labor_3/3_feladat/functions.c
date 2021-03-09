//
// Created by Legion on 3/9/2021.
//

#include "functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int seged(const void* a, const void* b){
    return *(int*)a-*(int*)b;
}
IntArray* createArray(int dimension){
    IntArray *array=(IntArray*)malloc(sizeof (IntArray));
    if(array==NULL){
        printf("ERROR");
        return NULL;
    }
    array->size=dimension;
    array->elements=(int*)malloc(array->size*sizeof(int));
    if(array->elements==NULL){
        printf("ERROR#2");
        free(array);
        return NULL;
    }
    return array;
}
void readArray(const char *fileName,IntArray **array){
    FILE * fin=fopen(fileName,"rt");
    if(!fin){
        printf("CANNOT OPEN FILE!");
        return;
    }
    int n;
    fscanf(fin,"%i",&n);
    IntArray *temps=createArray(n);
    if(temps==NULL){
        fclose(fin);
        return;
    }
    for(int i=0;i<temps->size;i++){
        fscanf(fin,"%i",&temps->elements[i]);
    }
    (*array)=temps;
    fclose(fin);
}
void printArray(IntArray* array){
    for(int i=0;i<array->size;i++){
        printf("%i ",array->elements[i]);
    }
}
void printArrayToFile(const char* fileName, IntArray *array)
{
    FILE * fout=fopen(fileName,"wt");
    for(int i=0;i<array->size;i++){
        fprintf(fout,"%i ", array->elements[i]);
    }
}
void sortArray(IntArray* array)
{
    qsort(array->elements,array->size,sizeof(int), seged);
    for(int i=0;i<array->size;i++){
        printf("%i ",array->elements[i]);
    }
}
int findElement(IntArray *array, int element){
    for(int i=0;i<array->size;i++)
        if(array->elements[i]==element)
            return i;

        return -1;

}
int minimum(IntArray* array){
    int min=array->elements[1];
    for(int i=0;i<array->size;i++) {
        if (array->elements[i] < min) {
            min=array->elements[i];        }
        }
    return min;
    }
int maximum(IntArray* array){
    int max=array->elements[1];
    for(int i=0;i<array->size;i++) {
        if (array->elements[i] > max) {
            max = array->elements[i];
        }
    }
    return max;
}
void fillArray(IntArray * array, int dimension, int first, int last){
    srand(time(0));
    for(int i=0;i<dimension;i++){
    array->elements[i]=(rand()%last+1)+first;
    }
}
void deleteElement(IntArray *array, int element){
    int poz=findElement(array,element);
    if(poz==-1)
        return;

    for(int i=poz;i<array->size-1;i++)
        array->elements[array->size]=0;
    array->size--;
}