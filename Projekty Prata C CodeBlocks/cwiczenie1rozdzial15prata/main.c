#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 32
#define spr
int do_int(char binar[],int max);
int main()
{
    char binar[MAX+1];
    int  max;
    printf("podaj liczbe w postaci binarnej max 32 bity:\n");
    gets(binar);
    max=strlen(binar);
    printf("wartosc calkowita liczby %s to %d\n",binar,do_int(binar,max));
    getchar();
    getchar();
    return 0;
}
int do_int(char binar[],int max)
{
    int i;
    int suma=0;
#ifdef spr
    printf("strlen(binar)=%d\n",max);
#endif
    int n;
    for(i=max-1,n=1; i>=0; i--,n*=2)
    {
        if(binar[i]=='1')
        {
            suma+=n;
        }
    }

    return suma;
}
