#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void pokaz_tablice(const double tab[],int n);
double *nowa_tablica(int n,...);

int main()
{
    double *w1;
    double *w2;
    double *w3;
    w1=nowa_tablica(5,1.2,2.3,3.4,4.5,5.6);
    w2=nowa_tablica(4,100.0,20.0,8.08,-1890.0);
    w3=nowa_tablica(7,12.0,13.34,12.1,1.0,2.4,5.2,6.7);
    pokaz_tablice(w1,5);
    pokaz_tablice(w2,4);
    pokaz_tablice(w3,7);
    free(w1);
    free(w2);
    free(w3);
    return 0;
}
void pokaz_tablice(const double tab[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%.2lf ",tab[i]);
    }
    putchar('\n');
}
double *nowa_tablica(int n,...)
{
    double *wsk;
    int i;
    va_list a;
    va_start(a,n);
    wsk=(double*)malloc(n*sizeof(double));
    for(i=0;i<n;i++)
    {
        wsk[i]=va_arg(a,double);
    }
    va_end(a);


    return wsk;




}
