#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WIERSZE 20
#define KOLUMNY 40
void zamiana(char wsk[][KOLUMNY],int wiersze);
int main()
{
    char tablica[WIERSZE][KOLUMNY];
    int i=0;
    int j;
    printf("podaj %d wierszy max %d znakow, lub wpisz pusty wiersz aby zakonczyc\n",WIERSZE,KOLUMNY-1);
    while(i<WIERSZE&&gets(tablica[i])!=NULL&&tablica[i][0]!='\0')
    {
        i++;
    }
    printf("Oto przyjete wiersze dla i=%d\n",i);
    for(j=0;j<=i;j++)
        puts(tablica[j]);
        zamiana(tablica,i);
    return 0;
}
void zamiana(char wsk[][KOLUMNY],int wiersze)
{
    char temp[wiersze][KOLUMNY];
    printf("wiersze=%d,kolumny=%d\n",wiersze,KOLUMNY);
    int i,j,k,l;
    for(i=0;i<wiersze;i++)
    {
        for(j=0,k=0;k<strlen(wsk[i]);j++,k++)
        {
            if(wsk[i][k]!='\0')
            {
                if(wsk[i][k]!=' ')
                {
                     temp[i][j]=wsk[i][k];

                }
                if(wsk[i][k]==' ')
                {
                    j--;
                }





                    /*printf("i=%d,j=%d,k=%d\n",i,j,k);*/
            }

        }
         temp[i][j+1]='\0';
    }

    puts("oto wynik temp:");
    for(l=0;l<wiersze;l++)
        puts(temp[l]);
}
