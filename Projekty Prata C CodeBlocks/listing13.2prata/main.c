#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char *argv[])
{
    FILE *we,*wy;
    int ch;

    char nazwa[40];
    int licznik=0;
    if(argc<2)
    {
        fprintf(stderr,"nie znaleziono argumentow dla %s\n",argv[0]);
        exit(1);
    }



    if((we=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"Nie mozna bylo otworzyc pliku %s\n",argv[2]);
        exit(1);
    }

if((wy=fopen(argv[1],"w"))==NULL)
    {
        fprintf(stderr,"Nie mozna bylo otworzyc pliku %s\n",argv[1]);
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
