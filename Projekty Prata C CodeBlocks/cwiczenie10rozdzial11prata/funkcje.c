
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "funkcje.h"
void sortuj_ascii(char lancuch[][KOLUMNY],int wiersze)
{
int i,j;
int dol,gora;
char *syf[wiersze];
char *temp2;
for(i=0;i<wiersze;i++)
    {
        syf[i]=lancuch[i];
    }
    for(dol=0;dol<wiersze-1;dol++)
{
    for(gora=dol+1;gora<wiersze;gora++)
    {
         if(strcmp(syf[dol],syf[gora])>0)
         {
                     temp2=syf[dol];
                     syf[dol]=syf[gora];
                     syf[gora]=temp2;
         }
    }
}

    for(i=0;i<wiersze;i++)
    printf("%s\n",syf[i]);
}
void sortuj_dlugosc(char lancuch[][KOLUMNY],int wiersze)
{
int i,j;
int dol,gora;
char *syf[wiersze];
char *temp2;
for(i=0;i<wiersze;i++)
    {
        syf[i]=lancuch[i];
    }
    for(dol=0;dol<wiersze-1;dol++)
{
    for(gora=dol+1;gora<wiersze;gora++)
    {
         if(strlen(syf[dol])>strlen(syf[gora]))
         {
                     temp2=syf[dol];
                     syf[dol]=syf[gora];
                     syf[gora]=temp2;
         }
    }
}

    for(i=0;i<wiersze;i++)
    printf("%s\n",syf[i]);



}
int menu()
{
    int ch;
    printf("1) wyswietlanie lancuchów.                         2)sortowanie wedlug ascii.\n");
    printf("3) sortowanie wedlug dlugosci.                    4)sortowanie wedlug dlugosci 1 slowa.\n");
    printf("5) koniec.\n");
ch=pobierz_wybor();
printf("ch=%d\n",ch);
return ch;
}
void sortuj_dl1wyraz(char lancuch[][KOLUMNY],int wiersze)
{
char temp[wiersze][KOLUMNY];
char *syf[wiersze];
char *temp2;
int i,j;
int dol,gora;
for(i=0;i<wiersze;i++)
{
    for(j=0;j<KOLUMNY;j++)
    {
        temp[i][j]=lancuch[i][j];
        if(temp[i][j]==' ')
            temp[i][j]='\0';

    }


}
for(i=0;i<wiersze;i++)
{
        puts(temp[i]);
        printf("strlen(%d)=%d\n",i,strlen(temp[i]));
}
for(i=0;i<wiersze;i++)
    {
        syf[i]=temp[i];
    }


for(dol=0;dol<wiersze-1;dol++)
{
    for(gora=dol+1;gora<wiersze;gora++)
    {
         if(strlen(syf[dol])>strlen(syf[gora]))
         {
                     temp2=syf[dol];
                     syf[dol]=syf[gora];
                     syf[gora]=temp2;
         }
    }
}
printf("gowno\n");
   for(i=0;i<wiersze;i++)
    printf("%s\n",syf[i]);

}


void wyswietl(char lancuch[][KOLUMNY],int wiersze)
{
    int i;
for(i=0;i<wiersze;i++)
{

        puts(lancuch[i]);

}
}
int pobierz_wybor()
{
char ch;
int x;
while(scanf("%d",&x)!=1)
{
while((ch=getchar())!='\n')
putchar(ch);
printf(" nie jest liczba popraw sie\n");
}
printf("x=%d\n",x);
return x;
}
