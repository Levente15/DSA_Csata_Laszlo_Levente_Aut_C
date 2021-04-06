#include <stdio.h>
#include "functions.h"
int main() {
    Film* films=readfromfile("be.txt");

    for(int i=0;i<3;i++){
        printf("%s %s %0.2lf %i ", films[i].filmCim, films[i].mufaj, films[i].hossz, films[i].vetitesek_szam);
        
        for(int j = 0; j < films[i].vetitesek_szam; j++) 
          printf("%.2lf ", films[i].vetitesek[j]);
        
        printf("\n");
    }

    nezesszam(films);
    destroy(films);

    return 0;
}
