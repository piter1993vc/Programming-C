#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 40
#define GRANICA 5
#define ROZMIAR_CELU 7

int main()
{
    char vslowa[GRANICA][ROZMIAR_CELU];
    char temp[ROZMIAR];
    int i=0;
    char *w[5];
    printf("podaj %d slow zaczynajacych sie na v:\n",GRANICA);
    while(i<GRANICA&&gets(temp))
    {
        if(temp[0]!='v')
        printf("%s nie zaczyna sie na v popraw sie\n",temp);
        else
        {
            w[i]=strncpy(vslowa[i],temp,ROZMIAR_CELU-1);
            vslowa[i][ROZMIAR_CELU-1]='\0';
            i++;
        }

    }
    puts("Oto przyjete slowa:");
    i=0;
    while(i<GRANICA)
    {
        puts(vslowa[i]);
        puts(w[i]);
        i++;
    }
        return 0;
}
