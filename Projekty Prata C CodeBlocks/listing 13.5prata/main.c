#include <stdio.h>
#include <stdlib.h>
#define KONIEC '\032'
#define MAX 40
int main()
{
    char plik[MAX];
    char ch;
    FILE *wp;
    long licznik,koniec;
    puts("podaj nazwe pliku");
    gets(plik);
    if((wp=fopen(plik,"rb"))==NULL)
    {
        fprintf(stdout,"Nie pozna otworzyc pliku %s\n",plik);
        exit(1);
    }
    fseek(wp,0L,SEEK_END);
    koniec=ftell(wp);
    for(licznik=1L;licznik<=koniec;licznik++)

    {
        fseek(wp,-licznik,SEEK_END);
        ch=getc(wp);
        if(ch!=KONIEC&&ch!='\r')
            putc(ch,stdout);
    }
    putchar('\n');
    fclose(wp);

    return 0;
}
