#include <stdio.h>

int ossz(int sz1,int sz2);
int main() {
    int sz1=0,sz2=0;
    scanf("%i",&sz1);
    scanf("%i",&sz2);
    printf("Az ossz: %i", ossz(sz1,sz2));
    return 0;
}
int ossz(int sz1,int sz2)
{
    return sz1+sz2;
}