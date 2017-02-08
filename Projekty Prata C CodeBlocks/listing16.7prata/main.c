#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 10
void print(const int tab[],int n);

int main()
{
    int zrodlo[ROZMIAR]={1,2,3,4,5,6,7,8,9,10};
    int cel[ROZMIAR];
    double ciekawostka[ROZMIAR/2]={1.0,2.0,3.0,4.0,5.0};

    puts("uzyto memcpy()");
    puts("zrodlo dane oryginalne:");
    print(zrodlo,ROZMIAR);
    memcpy(cel,zrodlo,10*sizeof(int));
    puts("\n cel dane skopiowane:");
    print(cel,ROZMIAR);


    puts("\n uzycie funkcji memmove()z nakladajacymi sie obszarami:");
    memmove(zrodlo+2,zrodlo,5*sizeof(int));
    puts("\n zrodlo-elementy 0-5 kopiowane do 2-7:");
    print(zrodlo,ROZMIAR);
    puts("\n uzycie memcpy() do skopiowania double do int:");
    memcpy(cel,ciekawostka,5*sizeof(double));
    puts("\n el 5 double do int:");
    print(cel,ROZMIAR);

    return 0;
}
void print(const int tab[],int n)
{
    int index;
    for(index=0;index<n;index++)
    {
        printf("%d ",tab[index]);
        if(index%5==0&&index!=0)
        {
            putchar('\n');
        }
    }

}
