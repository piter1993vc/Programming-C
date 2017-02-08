#include <stdio.h>
#include <stdlib.h>
void binar(int n);
void dwunastkowy(int n);

int main()
{
    int liczba;
    printf("prosze podaj dodatnia liczbe dziesietna calkowita\n");
    while((scanf("%d",&liczba))==1)
    {
        printf("odpowiednik liczby %d w systemie binarnym to:",liczba);
        binar(liczba);
        printf("\n");
           printf("odpowiednik liczby %d w systemie dwunastkowym to:",liczba);
        dwunastkowy(liczba);

        putchar('\n');
        printf("prosze podaj kolejna liczbe do konwersji\n");

    }
    printf("Hello world!\n");
    return 0;
}
void binar(int n)
{
    int r;
    int wynik;
    r=n%2;
    if(n>=2)
        binar(n/2);

    wynik=0+r;
    printf("%d",wynik);




}
void dwunastkowy(int n)
{
    int r;
    char wynik;
    r=n%12;
    if(n>=12)
        dwunastkowy(n/12);
if(r>9)
    r+=7;
    wynik='0'+r;
    printf("%c",wynik);




}

