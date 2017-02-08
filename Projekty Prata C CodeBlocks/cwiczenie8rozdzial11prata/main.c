#include <stdio.h>
#include <stdlib.h>
void zamiana(char *lancuch);

int main()
{
    char tablica[40];
    puts("podaj wierszyk max 39 znakow:");
    gets(tablica);
    puts("podano wierszyk:");
    puts(tablica);
    zamiana(tablica);
    puts("wierszyk od tylu:");
    puts(tablica);
    return 0;
}
void zamiana(char *lan)
{
    int i,j;

    char temp[40];
    for(i=strlen(lan)-1,j=0;i>=0,j<=strlen(lan);i--,j++)
        temp[j]=lan[i];
        temp[strlen(lan)]='\0';
        puts("jak tam temp:");
        puts(temp);
            for(i=0;i<=strlen(lan);i++)
                lan[i]=temp[i];

}
