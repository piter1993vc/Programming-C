#include <stdio.h>
#include <stdlib.h>
#define MAX 40
int main()
{
    char slowa[MAX];
    FILE *wp;
    wp=fopen("gowno.txt","a+");
    puts("podaj slowa ktore zapisac do pliku: ");
    while(gets(slowa)!=NULL&&slowa[0]!='\0')
        fprintf(wp,"%s",slowa);
    printf("zawartosc pliku:\n");
    rewind(wp);
    while(fscanf(wp,"%s",slowa)==1)
    {

        puts(slowa);

    }
    fclose(wp);


    return 0;
}
