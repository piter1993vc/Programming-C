#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct soczewka{
float ognisk;
float rozwart;
char nazwa[40];
} SOCZEWKA;
SOCZEWKA przypisz(void);
int main()
{
    int n;
    SOCZEWKA soczewki[10];
    printf("podaj indeks struktury do zapelnienia \n");
    scanf("%d",&n);
    soczewki[n]=przypisz();
    printf("oto wynik przypisania: indeks nr:%d, ogniskujaca=%f, rozwartosc=%f, nazwa=%s\n",n-1,soczewki[n].ognisk,soczewki[n].rozwart,soczewki[n].nazwa);
    return 0;
}
SOCZEWKA przypisz(void)
{
SOCZEWKA temp;
    puts("podaj ogniskowa soczewki w mm");
    scanf("%f",&temp.ognisk);
    puts("podaj rozwartosc soczewki");
    scanf("%f",&temp.rozwart);
    while(getchar()!='\n')
        continue;
    puts("podaj nazwe soczewki");
    gets(temp.nazwa);
    return temp;



}
