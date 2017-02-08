#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main()
{
    FILE *wp;
    char slowa[MAX];
    if((wp=fopen("slowka.txt","a+"))==NULL)
    {
        fprintf(stdout,"nie moge otworzyc pliku\"slowka.txt\"\n");
        exit(1);
    }

    puts("podaj slowa ,ktore maja zostac dodane do pliku:");
    puts("aby zakonczyc wcisnij ENTER na poczatku wiersza.");
    while(gets(slowa)!=NULL&&slowa[0]!='\0')

        fprintf(wp,"%s",slowa);
    puts("zawartosc pliku");
    rewind(wp);
    while(fscanf(wp,"%s",slowa)==1)
        puts(slowa);
    if(fclose(wp)!=0)
        fprintf(stderr,"blad przy zamykaniu pliku\n");

    return 0;
}
