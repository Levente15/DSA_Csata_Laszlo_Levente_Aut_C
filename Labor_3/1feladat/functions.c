//
// Created by Legion on 3/10/2021.
//
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
void feltoltes(int**a, int n){
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        a[i]=(int*)malloc(n*sizeof(int));
        for(int j=0;j<n;j++)
        {
            a[i][j]=rand()%10;
            printf("%i ",a[i][j]);
        }
        printf("\n");
    }
}
void feltoltes1(int**b, int m){
    srand(time(NULL));
    for(int i=0;i<m;i++)
    {
        b[i]=(int*)malloc(m*sizeof(int));
        for(int j=0;j<m;j++)
        {
            b[i][j]=rand()%10;
            printf("%i ",b[i][j]);
        }
        printf("\n");
    }
}
void szorzas(int**a,int**b, int n,int m,int**s) {
    int sum = 0, szorzo[10][10];
    if (n != m) {
        printf("Nem lehetseges a szorzas");
    } else {
        printf("Aa szorzast kovetoen:\n");
        for (int i = 0; i < m; i++) {
            s[i] = (int *) malloc(m * sizeof(int));
            for (int j = 0; j < m; j++) {
                s[i][j] =0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) {
                for (int k = 0; k < n; k++){
                    sum = sum + a[i][k] * b[k][j];
                }
                szorzo[i][j]=sum;
                sum=0;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) {
                printf("%i ",szorzo[i][j]);
            }
            printf("\n");
        }
    }
}
#include "functions.h"
