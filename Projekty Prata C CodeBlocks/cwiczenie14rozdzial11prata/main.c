#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100
void zamiana(const char *lancuch,int znaki);
int main()
{
    char tablica[MAX];
    printf("podaj lancuch do zamiany na liczbe przez funckje \" atoi \":\n");
    gets(tablica);
    puts("wprowadzone dane to:");
    puts(tablica);
    zamiana(tablica,strlen(tablica));

    return 0;
}
void zamiana(const char *lancuch,int znaki)
{
    int liczba;
    int i=0;
    char temp[znaki];
    while(isdigit(lancuch[i])&&i<znaki)
    {
            printf("i=%d\n",i);
            temp[i]=lancuch[i];
            i++;


    }
    temp[i]='\0';
printf("dlugosc temp to%d\n",strlen(temp));
    puts("oto wynik:");
    liczba=( int)temp;

        puts(temp);
         printf("liczba=%d\n",liczba); /*trzeba troche poprawic zeby byl int*/
}
