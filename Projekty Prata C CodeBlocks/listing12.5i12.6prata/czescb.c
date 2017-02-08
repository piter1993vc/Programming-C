
#include <stdio.h>
extern int liczba;
static int suma=0;
void sumuj(int k);
void sumuj(int k)
{
    static int podsuma=0;
    if(k<=0)
    {
        printf("cykl petli:%d\n",liczba);
        printf("podsuma=%d,suma=%d\n",podsuma,suma);
        podsuma=0;
    }
    else
    {
        podsuma+=k;
        suma+=k;
    }


}
