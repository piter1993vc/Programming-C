#include <stdio.h>
#include <stdlib.h>
#define BUFOR 1024

int main(int argc,char *argv[])
{
    FILE *wp;
    char ch;
    int i;
    int pliki=0;

    if(argc<2)
    {
        fprintf(stderr,"Nie podano plikow do otwarcia!!!!!!!!!!!!!\n");
        exit(1);
    }
    puts("podano nazwy plikow:\n");
    for(i=1;i<argc;i++)
    {
        printf("%d.%s\n",i,argv[i]);
    }

    puts("podaj indeks pliku do otwarcia lub x aby zakonczyc:");

    while(scanf("%d",&i))
    {
        if((wp=fopen(argv[i],"r"))==NULL)
        {
            fprintf(stderr,"Nie udalo sie otworzyc pliku %s\n",argv[i]);
            goto skok;

        }

        printf("Zawartosc pliku %s:\n",argv[i]);
          while((ch=getc(wp))!=EOF)
        {
            putc(ch,stdout);

        }
        fclose(wp);
        pliki++;
        putchar('\n');
skok:
puts("podaj kolejny indeks lub x aby zakonczyc:");
    }

    printf("\n Pomyslnie otwarto %d z %d plikow\n",pliki,argc-1);
    getchar(); getchar();
    return 0;
}
