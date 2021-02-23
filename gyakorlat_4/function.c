//
// Created by Legion on 2/23/2021.
//

#include "function.h"
#include <stdio.h>
void rendesen(float* a, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%.2f ", a[i]);
    }
}
void visszafele(float* a, int n)
{
    for(int i=n-1;i>=0;i--)
    {
       printf("%.2f ", a[i]);
    }
}