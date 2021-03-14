//
// Created by Legion on 3/13/2021.
//

#include "functions.h"
#include <stdlib.h>
CEG* create(int n){
    CEG *a =(CEG*)malloc(sizeof(int));
    return a;
}
void read_data(CEG* a, int n, FILE *f) {
    for (int i = 0; i < n; i++) {
        fscanf(f, "%s", &a[i].name);
        fscanf(f, "%c", a[i].education);

        if (a[i].education == 'N') {
            continue;
        } else if (a[i].education == 'K') {
            fscanf(f, "%s", a[i].kv.hschool);
            fscanf(f, "%f", &a[i].kv.average);
        } else if (a[i].education == 'F') {
            fscanf(f, "%s", a[i].ff.university);
            fscanf(f, "%s", a[i].ff.department);
            fscanf(f, "%f", &a[i].ff.average);
        }
    }
}
    void write_data(CEG *a, int n) {
        for (int i = 0; i < n; ++i) {
            printf("%i. worker name: %s", i + 1, a[i].name);

            if (a[i].education == 'N') {
                printf("\nThe worker doesn't have education!");
            } else if (a[i].education == 'K') {
                printf("\nHigh school: %s", a[i].kv.hschool);
                printf("\nAverage: %f", a[i].kv.average);
            } else if (a[i].education == 'F') {
                printf("\nUniversity: %s", a[i].ff.university);
                printf("\nDepartment: %s", a[i].ff.department);
                printf("\nAverage: %f", a[i].ff.average);
            }
        }
    }