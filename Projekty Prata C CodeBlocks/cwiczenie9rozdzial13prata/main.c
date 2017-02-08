#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 40
 int i=0;
int main()
{
    FILE *wp;
    int ch=0;


    char slowa[MAX];
    if((wp=fopen("s","a+"))==NULL)
    {
        fprintf(stdout,"nie moge otworzyc pliku\"s\"\n");
        exit(1);
    }

    puts("podaj slowa ,ktore maja zostac dodane do pliku:");
    puts("aby zakonczyc wcisnij ENTER na poczatku wiersza.");
    while(gets(slowa)!=NULL&&slowa[0]!='\0')
        fprintf(wp,"%d%s\n",++i,slowa);
        fprintf(wp,"%d",i);
    puts("zawartosc pliku");
    rewind(wp);
    while(fscanf(wp,"%s",slowa)==1)
        puts(slowa);

    if(fclose(wp)!=0)
        fprintf(stderr,"blad przy zamykaniu pliku\n");

    return 0;
}
