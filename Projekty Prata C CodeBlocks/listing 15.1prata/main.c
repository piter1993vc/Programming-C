#include <stdio.h>
#include <stdlib.h>

char *do_binar(int n,char *bin);
void pokaz_bin(const char *bin);

int main()
{
char bin[8*sizeof(int)+1];
int liczba;
puts("podaj liczbe calkowita ktoraa zostanie zamieniona na binarna");
puts("wpisanie danych nienumerycznych konczy program:");
while(scanf("%d",&liczba)==1)
{
    do_binar(liczba,bin);
    printf("liczba %d binarnie to:",liczba);
    pokaz_bin(bin);
    putchar('\n');
    printf("podaj kolejna liczbe do zamiany na binarna:\n");

}
    puts("koniec");
    return 0;
}
char *do_binar(int n,char *bin)
{
    int i;
     static int liczba=8*sizeof(int);
    for(i=(liczba-1);i>=0;i--,n>>=1)
    {
      bin[i]=(01&n)+'0';
    }

    bin[liczba]='\0';
    return bin;
}
void pokaz_bin(const char *bin)
{
    int licznik=0;
    while(bin[licznik])
    {
        putchar(bin[licznik]);
        if(++licznik%4==0&&bin[licznik])
            putchar(' ');
    }

}




