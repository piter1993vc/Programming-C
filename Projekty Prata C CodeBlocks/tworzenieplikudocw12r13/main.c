#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZE 20
#define KOLUMNY 30

int main()
{
    FILE *wp;
    int i,j;
    srand(time(NULL));
    int tablica[WIERSZE][KOLUMNY];
    for(i=0;i<WIERSZE;i++)
    {
        for(j=0;j<KOLUMNY;j++)
        {
        tablica[i][j]=(int)rand()%10;
        }


    }
    puts("oto tablica:");
      for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
            printf("%d ",tablica[i][j]);
        }
           putchar('\n');
        }

    if((wp=fopen("dane.txt","w"))==NULL)
    {
        fprintf(stderr,"nie udalo sie utworzyc pliku %s\n","dane.txt");
        exit(1);
    }
 for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
            fprintf(wp,"%d ",tablica[i][j]);
        }
           putc('\n',wp);
        }



    fclose(wp);
    puts("koniec");
    return 0;
}
