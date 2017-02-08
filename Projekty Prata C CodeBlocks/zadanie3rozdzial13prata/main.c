#include <stdio.h>
#include <stdlib.h>
#define MAX 100
double srednia(double tab[],int n);
 int main(int argc,char *argv[])
{
    FILE *wp;
    double tablica[MAX];
    int i=0;
    char ch;

    if(argc!=2)
    {
        fprintf(stderr,"nie udalo sie wczytac argumentu wiersza polecen\n");
    }
if((wp=fopen(argv[1],"r"))==NULL)
   {
       puts("podaj wartosc zmiennoprzecinkowa lub x aby zakonczyc\n");
       while(scanf("%lf",&tablica[i]))
             {
                    printf("tablica[%d]=%lf\n",i,tablica[i]);
                 i++;
             }

        printf("wynik sredniej arytmetycznej to %.2f\n",srednia(tablica,i));
   }
while(wp!=NULL&&(ch=getc(wp))!=EOF)
{
    putchar(ch);
}

if(wp!=NULL)
fclose(wp);
 puts("dzieki za wspolprace");

    return 0;
}
double srednia(double tab[],int n)

{
    double suma=0;
    int i;
    for(i=0;i<n;i++)
        suma+=tab[i];
    return (double) suma/n;
}
