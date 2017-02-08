#include <stdio.h>
#include <stdlib.h>
void fibbonaci(int wyraz);
int main()
{
    int ktory;
    printf("powiedz ktory wyraz chcesz wyliczyc:\n");
    while((scanf("%d",&ktory))==1)
    {

        fibbonaci(ktory);
        printf("podaj kolejny numer wyrazu\n");
    }
    printf("Hello world!\n");
    return 0;
}
void fibbonaci(int wyraz)
{
    int licznik;
    int  fibbonaci[40];
    fibbonaci[0]=1;
    fibbonaci[1]=1;
    for(licznik=2;licznik<=wyraz;licznik++)
      fibbonaci[licznik]=fibbonaci[licznik-1]+fibbonaci[licznik-2];
    printf(" %d wyraz fibbonaciego jest rowny %d\n",wyraz,fibbonaci[wyraz]);

}
