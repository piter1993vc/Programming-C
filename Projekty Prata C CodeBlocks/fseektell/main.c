#include <stdio.h>
#include <stdlib.h>
#define DLAN 50
int main()
{
    char plik[DLAN];
    char ch;
    FILE *wp;
    long licznik,koniec;
    puts("podaj nazwe pliku: ");
    gets(plik);
    if((wp=fopen(plik,"rb"))==NULL)
    {

        fprintf(stderr,"nie moge otworzyc pliku %s\n",plik);
        exit(1);
    }
    fseek(wp,0L,SEEK_END);
    koniec=ftell(wp);
    for(licznik=1L;licznik<=koniec;licznik++)
    {
        fseek(wp,-licznik,SEEK_END);
        ch=getc(wp);
        if(ch!='\032'&&ch!='\r')
        {

            putchar(ch);
        }


    }
    putchar('\n');
         fclose(wp);
    printf("Hello world!\n");
    return 0;
}
