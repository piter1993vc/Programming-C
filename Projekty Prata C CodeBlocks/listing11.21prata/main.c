#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define GRANICA 5
#define ROZMIAR 81
int main()
{
    char vslowa[GRANICA][ROZMIAR];
    char temp[ROZMIAR];
    int i=0;
    printf("prosze podaj %d slow zaczynajacych sie na v:\n",GRANICA);
    while(i<GRANICA&&gets(temp))
    {
        if(temp[0] !='v')
            printf("%s nie zaczyna sie na v\n",temp);
        else
        {
            strcpy(vslowa[i],temp);
            i++;
        }
    }
    puts("oto przyjete slowa");
    for(i=0;i<GRANICA;i++)
    {
        puts(vslowa[i]);
    }
    return 0;
}
