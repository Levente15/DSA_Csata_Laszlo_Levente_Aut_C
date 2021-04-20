#include <stdio.h>
#include "functions.h"
#include <string.h>
/*
Tároljátok egy félstatikus veremben egy legtöbb 10 betűből álló szó karaktereit előforulásuk fordított sorrendjében. Írassátok ki a magánhangzókat egy állományba.

Írjátok meg a következő függvényeket: create, insert, print, destroy*/
int main() {

    char szo[11];
    printf("Add meg a szavat:");
    scanf("%s",szo);

    Stack * stack=create(10);

    for(int i=0;i<=strlen(szo)-1;i++)
        insert(stack,szo[i]);


    FILE *maganhangzo=fopen("maganhangzo.txt","wt");

    if(!maganhangzo){
        printf("Hiba a megnyitasnal");
        return -1;
    }
    print(stack,maganhangzo);

    fclose(maganhangzo);

    return 0;
}
