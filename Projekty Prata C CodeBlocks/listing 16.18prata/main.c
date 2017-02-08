#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
double sumuj(int lim,...);

int main()
{


    double s,t;
    s=sumuj(3, 1.1,2.32,4.15);
    t=sumuj(5, 1.1,2.32,4.15,5.12,4.98);
    printf("suma 3 wartosci =%g\n",s);
    printf("suma 5 wartosci =%g\n",t);

    return 0;
}
double sumuj(int lim,...)
{
    va_list ap; /*obiekt przechowujacy dane*/
    double suma=0;
    int i;
    va_start(ap,lim); /*zainiciowanie listy argumentow*/
    for(i=0;i<lim;i++)
    {
        suma+=va_arg(ap,double);

    }
    va_end(ap);
    return suma;

}
