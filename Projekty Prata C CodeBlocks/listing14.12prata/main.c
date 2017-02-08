#include <stdio.h>
#include <stdlib.h>
struct elast{
int licznik;
double srednia;
double wynik[];
};
void pokazElast(struct elast *p);
int main()
{
    struct elast *wsk1,*wsk2;
    int n=5;
    int i;
    int suma=0;
    wsk1=malloc(sizeof(struct elast)+n*sizeof(double));
    wsk1->licznik=n;
    for(i=0;i<n;i++)
    {
        wsk1->wynik[i]=20.0*i;
        suma+=wsk1->wynik[i];
    }
    wsk1->srednia=suma/n;
    pokazElast(wsk1);
    n=9;
    suma=0;
    wsk2=malloc(sizeof(struct elast)+n*sizeof(double));
    wsk2->licznik=n;
    for(i=0;i<n;i++)
    {
        wsk2->wynik[i]=20.0*i-2.0*i;
        suma+=wsk2->wynik[i];
    }
    wsk2->srednia=suma/n;
    pokazElast(wsk2);
    free(wsk1);
    free(wsk2);
    return 0;
}
void pokazElast(struct elast *p)
{
    int i;
    printf("wynik:");
    for(i=0;i<p->licznik;i++)
    {
        printf("%.2lf ",p->wynik[i]);

    }
      printf("\n srednia =%lf\n",p->srednia);
}
