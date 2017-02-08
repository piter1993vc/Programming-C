#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define ROZMIAR 80
void duzelit(char *wiersz);
int licz(const char *wiersz);

int main()
{
    char zdanie[ROZMIAR];
    puts("podaj wiersz zdaania");
    gets(zdanie);
    puts("zdanie w duzych literach to:");
    duzelit(zdanie);
    puts(zdanie);
    printf("wpisany wiersz zawiera %d znakow interpukcyjnych.\n",licz(zdanie));

    return 0;
}
void duzelit(char *wiersz)
{
    while(*wiersz!='\0')
    {
        *wiersz=toupper(*wiersz);
        wiersz++;
    }
}
int licz(const char *wiersz)
{
    int licznik=0;
    while(*wiersz!='\0')
    {
        if(ispunct(*wiersz))
        {
            licznik++;

        }
        wiersz++;
    }
    return licznik;
}
