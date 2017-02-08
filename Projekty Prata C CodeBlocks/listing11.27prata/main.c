#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int licznik;
    printf("wiersz polecen zawiera %d znakow\n",argc-1);
    for(licznik=1;licznik<argc;licznik++)
    printf("%d: %s\n",licznik,argv[licznik]);
getchar(); getchar();

    return 0;
}
