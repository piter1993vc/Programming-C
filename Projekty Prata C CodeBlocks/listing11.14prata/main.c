#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 80
int main()
{
    char kwiat[ROZMIAR];
    char tekst[]="smierdza jak stare buty";
    puts("jakie kwiaty lubisz najbardziej?");
    gets(kwiat);
    strcat(kwiat,tekst);
    puts(kwiat);
     printf("drugi lancuch:-->>\n");
    puts(tekst);

    return 0;
}
