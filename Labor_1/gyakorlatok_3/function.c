//
// Created by Legion on 2/23/2021.
//

#include "function.h"
int paros(int* a,int n)
{
    int db1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            db1++;
        }
    }
    return db1;
}
int paratlan(int* a, int n)
{
    int db1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            db1++;
        }
    }
    return db1;
}
int pozitiv(int* a, int n)
{
    int db1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            db1++;
        }
    }
    return db1;
}
int negativ(int* a, int n)
{
    int db1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            db1++;
        }
    }
    return db1;
}