#include <stdio.h>
#include <stdlib.h>
int odwroc_nbit(int liczba,int bity);
char *binar(int n,char *bin);
void pokaz(char *binar);
int main()
{
    int liczba;
    int bity;
    char binarna[8*sizeof(int)+1];
    puts("Program wylicza binarna reprezentacje liczby calkowitej,");
    puts("podaj liczbe calkowita lub znak nienumeryczny aby zakonczyc:");
    while(scanf("%d",&liczba)==1)
    {
        printf("liczba %d binarnie to: ",liczba);
        pokaz(binar(liczba,binarna));
        printf("\n ile bitow chcesz odwrocic, max 32 min 0\n");
        while(scanf("%d",&bity)!=1||bity>32||bity<0)
        {
            puts("popraw liczbe bitow max 32 min 0:\n");
        }

        printf("liczba %d po odwroceniu ostatnich %d bitow to: ",liczba,bity);
        binar(odwroc_nbit(liczba,bity),binarna);
        pokaz(binarna);
        printf("\n podaj kolejna liczbe calkowita do przedstawienia w postaci binarnej:\n");


    }
    return 0;
}
int odwroc_nbit(int liczba,int bity)
{
      int MASKA=0;
    int bajt=1;
    while(bity-->0)
    {
        MASKA|=bajt;
        bajt<<=1;
    }
    return liczba^MASKA;
}
char *binar(int n,char *bin)
{

  int i;
    static int licznik=8*sizeof(int);
    for(i=licznik-1; i>=0; i--, n>>=1)
    {
        bin[i]=(01&n)+'0';
    }

    bin[licznik]='\0';
    return bin;
}
void pokaz(char *binar)
{
    int i=0;
    while(binar[i])
    {
        putchar(binar[i]);
        if(++i%4==0&&binar[i])
            putchar(' ');
    }
}
