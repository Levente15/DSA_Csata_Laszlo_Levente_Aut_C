//
// Created by Legion on 2/28/2021.
//
#include "function.h"
#include <stdio.h>
void beker(int* a, int n){
    for(int i=0;i<n;i++){
        printf("a[%i]= ",i);
        scanf("%i",&a[i]);
    }
}
void kiir(int* a, int n){
    for(int i=0;i<n;i++){
        printf("%i ",a[i]);
    }
    printf("\n");
}
int vizsgalo(int*a, int n){
    int max=a[0];
    int index=-1;
    for(int i=0;i<n;i++) {
        if (a[i-1]<a[i] && a[i+1]<a[i] && max<a[i]){
           max=a[i];
           index=i;
        }
    }
    return index+1;

}
