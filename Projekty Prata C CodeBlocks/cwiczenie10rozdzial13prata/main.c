#include <stdio.h>
#include <stdlib.h>
#define MAX 30

int main()
{
    FILE *wp;
    char plik[MAX];
    int i;
    long pozycja;
    char ch;
    puts("podaj nazwe pliku do otwarcia");
    gets(plik);
    if((wp=fopen(plik,"r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s lub tez nie istnieje\n",plik);
        exit(1);

    }
puts("podaj polozenie w pliku lub znak nienumeryczny aby zakonczyc\n");
while(scanf("%d",&i))
{
    pozycja=(long)i*sizeof(long);
    fseek(wp,pozycja,SEEK_SET);
    while((ch=getc(wp))!=EOF&&ch!='\n')
    {
       putc(ch,stdout);
    }

    puts("\n podaj kolejne polozenie w pliku lub znak nienumeryczny aby zakonczyc\n");
}
fclose(wp);
puts("koniec");

    return 0;
}
