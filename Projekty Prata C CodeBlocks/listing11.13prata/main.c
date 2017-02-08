#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void skroc(char *lancuch, int koniec);

int main()
{
    char wyrazenie[]="gownojad je gowna bo to lubi robic";
    puts(wyrazenie);
    skroc(wyrazenie,10);
    puts(wyrazenie);
    printf("a teraz reszta zdania");
    puts(wyrazenie+11);

    return 0;
}
void skroc(char *lancuch, int koniec)
{
    if(strlen(lancuch)>koniec)
    {
        *(lancuch+koniec)='\0';
    }
}
