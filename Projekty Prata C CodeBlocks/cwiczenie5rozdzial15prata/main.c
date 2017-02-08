#include <stdio.h>
#include <stdlib.h>
/*#define spr*/
 char bin[8*sizeof(unsigned int)+1];
unsigned int licz(unsigned int liczba, int n);
char *do_bin(char *bin, unsigned int n);
int main()
{
   unsigned int liczba;

    int n;
    printf("podaj liczbe calkowita lub znak nienumeryczny aby zakonczyc:\n");
    while((scanf("%ud",&liczba))==1)
    {
    printf("podaj ilosc krokow do przesuniecia w lewo 0:\n");
    while((scanf("%d",&n))!=1)
    {
        while(getchar()!='\n')
            continue;
        printf("popraw sie torbo:\n");
    }
        printf("liczba:\n %s przesunieta o %d pozycji w lewo przy pomocy kolejki to:\n",do_bin(bin,liczba),n);
        printf("\n %s",do_bin(bin,licz(liczba,n)));


        printf("\n podaj kolejna liczbe calkowita lub znak nienumeryczny aby zakonczyc:\n");
    }
    return 0;
}
unsigned int licz(unsigned int liczba,int n)
{
    int i;
    unsigned int maska=0;
    unsigned int bit=1;
    unsigned int wynik;
    int rozmiar=8*sizeof(unsigned int)-1;
    unsigned int pomoc;

    while(rozmiar-->0)
    {

        maska|=bit;
        bit<<=1;
        #ifdef spr
        printf("maska=%s\n",do_bin(bin,maska));
        #endif
    }
    for(i=0;i<n;i++)
    {
        pomoc=liczba;
        liczba<<=1;
        if((pomoc&~maska)==~maska)
        {
            #ifdef spr
            printf("lala");
            #endif
          liczba+=01;
        }
    }
    wynik=liczba;
    return wynik;
}
char *do_bin(char *bin,unsigned int n)
{
    int i;
    unsigned int k=n;
    int licznik=8*sizeof(unsigned int);
    for(i=licznik-1;i>=0;i--,k>>=1)
    {
    bin[i]=(01&k)+'0';
    }
    bin[licznik]='\0';
    return bin;


}

