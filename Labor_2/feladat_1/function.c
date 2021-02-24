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
int lineariskereses(int* a, int n,int keresettelem)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==keresettelem)
        {
            return i;
        }
    }
    return -1;
}

