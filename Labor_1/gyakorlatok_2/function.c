//
// Created by Legion on 2/23/2021.
//

#include "function.h"
float osszeg(float* a, int n)
{
    float s=0;
    for(int i=0;i<n;i++)
    {
        s+=a[i];
    }
    return s;
}
float szorzat(float* a, int n)
{
    float sz=1;
    for(int i=0;i<n;i++)
    {
        sz*=a[i];
    }
    return sz;
}
float atlag(float* a, int n)
{
    float at=0;
    for(int i=0;i<n;i++)
    {
        at+=a[i];
    }
    return (float)at/(float)n;
}