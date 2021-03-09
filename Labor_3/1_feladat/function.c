//
// Created by Legion on 3/7/2021.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "function.h"
CEG *create(int n){
    CEG * a=(CEG*)malloc(n*sizeof(int));
    return 0;
}
void read_data(CEG*a, int n,FILE* fin){
    for(int i=0;i<n;i++) {
        fscanf(fin, "%s", a[i].name);
        fscanf(fin, "%s", a[i].education);

        if (a[i].education == 'N') {
            continue;
        } else if (a[i].education == 'K') {
            fscanf(fin, "%s", a[i].kozepfok.average);
            fscanf(fin, "%s", a[i].kozepfok.highschool);
        } else if (a[i].education == 'H')
            fscanf(fin, "%s", a[i].felsofok.institute);
            fscanf(fin, "%s", a[i].felsofok.department);
    }
}