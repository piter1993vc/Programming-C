#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define WIERSZE 20
#define KOLUMNY 30
int main()
{
    FILE *wp;
    int i,j;

    size_t bajty;
    srand(time(NULL));
    int tablica[WIERSZE][KOLUMNY];
    int liczby[WIERSZE][KOLUMNY];
    char obraz[WIERSZE][KOLUMNY+1];
    for(i=0;i<WIERSZE;i++)
    {
        for(j=0;j<KOLUMNY;j++)
        {
        tablica[i][j]=(int)rand()%10;
        }
    }
    puts("oto tablica \"tablica\":");
      for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
            printf("%d ",tablica[i][j]);
        }
           putchar('\n');
        }
    if((wp=fopen("dane.dat","w"))==NULL)
    {
        fprintf(stderr,"nie udalo sie utworzyc pliku %s\n","dane.dat");
        exit(1);
    }
 for(i=0;i<WIERSZE;i++)
        {
    bajty=fwrite(tablica[i],sizeof(int),KOLUMNY,wp);
    printf("zapisano pomyslnie %d bajtow dla wiersza %d\n",bajty,i);
        }

    fclose(wp);
    if((wp=fopen("dane.dat","r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s\n","dane.txt");
        exit(2);
    }
     puts("odczytanie danych z pliku do tablicy liczby:");
     for(i=0;i<WIERSZE;i++)
     {
         bajty=fread(liczby[i],sizeof(int),KOLUMNY,wp);
         printf("odczytano pomyslnie %d bajtow dla %d wiersza\n",bajty,i);

     }






putchar('\n');
putchar('\n');
putchar('\n');


















        puts("oto tablica \"liczby\":");
          for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
            printf("%d ",liczby[i][j]);
        }
           putchar('\n');
        }
fclose(wp);
puts("kopiowanie tablicy int do tablicy lancuchow:");

for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
           obraz[i][j]=(char)liczby[i][j];


        }
obraz[i][30]='\0';


        }
        putchar('\n');
        putchar('\n');
        putchar('\n');
        puts("wyswietlenie obrazu:");
        for(i=0;i<WIERSZE;i++)
        {
        for(j=0;j<KOLUMNY;j++)
        {
           if(obraz[i][j]==0)
            putchar(' ');
            else if(obraz[i][j]==1)
            putchar('.');
            else if(obraz[i][j]==2)
            putchar(',');
            else if(obraz[i][j]==3)
            putchar('! ');
            else if(obraz[i][j]==4)
            putchar('^');
            else if(obraz[i][j]==5)
            putchar('*');
            else if(obraz[i][j]==6)
            putchar('&');
            else if(obraz[i][j]==7)
            putchar('$');
            else if(obraz[i][j]==8)
            putchar('@');
            else if(obraz[i][j]==9)
            putchar('#');

        }
        putchar('\n');

        }

    puts("koniec");
    return 0;
}
