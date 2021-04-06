//
// Created by Legion on 4/6/2021.
//

#ifndef TAV_B_FUNCTION_H
#define TAV_B_FUNCTION_H
typedef struct{
   char nev[15];
   double tomeg;
   char vitamin[1];
   int napokszam;
   int napiajanlat[7];
}Zoldseg;
Zoldseg *createZoldseg(char  nev[15],double tomeg, char  vitamin[1],int napokszam, int napiajanlat[7]);
Zoldseg * readfromfile(char * filename);
void destroy(Zoldseg* zoldseg);
#endif //TAV_B_FUNCTION_H
