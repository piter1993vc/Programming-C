#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 5
int main()
{
    char *lista[ROZMIAR]={"astronomia","asteroida","astrofizyka","ostroga","asteryzm"};
    int licznik=0;
    int i;
    for(i=0;i<ROZMIAR;i++)
    {
        if(strncmp(lista[i],"astro",ROZMIAR)==0)
        {
        printf("znaleziono %s\n",lista[i]);
        licznik++;
        }

    }
    printf("lista zawiera %d slowa zaczynajace sie na \"astro\"\n",licznik);
    return 0;
}
