#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZE 20
#define KOLUMNY 30
int main()
{
    FILE *wp;
    int i,j;
    char ch;
    srand(time(NULL));
    int tablica[WIERSZE][KOLUMNY];
    int liczby[WIERSZE][KOLUMNY];
    char obraz[WIERSZE][KOLUMNY];
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
    if((wp=fopen("dane.txt","r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s\n","dane.txt");
        exit(2);
    }
     puts("odczytanie danych z pliku do tablicy liczby:");


i=0;j=0;
     while((ch=getc(wp))!=EOF)
     {
       if(ch!=' '&&ch!='\n'&&ch!='\0')
         {
            liczby[i][j]=ch;
            j++;

         }
            if(j%30==0&&j!=0)
            {
              j=0;
              i++;
            }
     }

putchar('\n');
putchar('\n');
putchar('\n');


















        puts("oto tablica 2:");
          for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
            printf("%d",liczby[i][j]);
        }
           putchar('\n');
        }
fclose(wp);
puts("kopiowanie tablicy int do tablicy lancuchow:");

for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
           obraz[i][j]=liczby[i][j];
        }
        obraz[i][30]='\0';

        }
        putchar('\n');
        putchar('\n');
        putchar('\n');
        puts("wyswietlenie obrazu:");
        for(i=0;i<WIERSZE;i++)
        {
            puts(obraz[i]);
        }

    puts("koniec");
    return 0;
}
