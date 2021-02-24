//
// Created by Legion on 2/24/2021.
//
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
# include "function.h"

int feltoltes(int* a, int n)
{
    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }
}
int kiiras(int* a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%i ", a[i]);
    }
}
int binariskereses(int* a, int n, int keresettelem, int elso, int utolso)
{
    int kozep=(elso+utolso)/2;
    while(elso<=utolso) {
        if (a[kozep] < keresettelem) {
            elso = kozep + 1;
        } else if (a[kozep] == keresettelem) {
            printf("Az elem megvan: %i", kozep + 1);
            break;
        } else {
            utolso = kozep - 1;
            kozep = (elso + utolso) / 2;
        }
    }
        if(elso>utolso)
        {
            printf("A keresett elem nincs meg");
        }
    }

#include "function.h"
