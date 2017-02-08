#include <stdio.h>
#include <stdlib.h>
int licz(int n,int nr);
int main()
{
    int n,nr;
    printf("podaj liczbe calkowita lub znak nienumeryczny aby zakonczyc:\n");
    while((scanf("%d",&n))==1)
    {
            printf("podaj numer bitu 0 to bit najmlodszy:\n");
    while((scanf("%d",&nr))!=1)
    {
        while(getchar()!='\n')
            continue;
        printf("popraw sie torbo:\n");
    }
        printf("wartosc bitu %d w liczbie %d to %d\n",nr,n,licz(n,nr));
        printf("podaj kolejna liczbe calkowita lub znak nienumeryczny aby zakonczyc:\n");
    }
    return 0;
}
int licz(int n,int nr)
{
  int wynik;
   int bit=1;

       while(nr-->0)
       {
           bit<<=1;
       }

   if((n&bit)==bit)
    wynik=1;
   else
    wynik=0;
    return wynik;
}
