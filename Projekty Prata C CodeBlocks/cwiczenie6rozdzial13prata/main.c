#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *we,*wy;
    int ch;
    int i=0;
    char nazwa[40];
    int licznik=0;
    puts("wpisz nazwe pliku docelowego do utworzenia");
    gets(nazwa);

    if((we=fopen("gowno.txt","r"))==NULL)
    {
        fprintf(stderr,"Nie mozna bylo otworzyc pliku %s\n","gowno.txt");
        exit(1);
    }

if((wy=fopen(nazwa,"w"))==NULL)
    {
        fprintf(stderr,"Nie mozna bylo otworzyc pliku %s\n",nazwa);
        exit(2);
    }
    while((ch=getc(we))!=EOF)
    {

            putc(ch,wy);
    }
if(fclose(we)!=0||fclose(wy)!=0)
    fprintf(stderr,"blad przy zamykaniu plikow\n");
    return 0;
}
