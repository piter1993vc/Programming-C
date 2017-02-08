#include <stdio.h>
#include <stdlib.h>
double suma(double a,double b);
double roznica(double a,double b);
double iloczyn(double a,double b);
double iloraz(double a,double b);
int main()
{
    double(*wsk[4])(double a,double b)={suma,roznica,iloczyn,iloraz};
    double a,b;
    printf("podaj 2 liczby zmiennoprzecikowe lub litere aby zakonczyc:\n");
    while(scanf("%lf %lf",&a,&b)==2)
    {
       printf("suma =%.2lf\n",(*wsk)(a,b));
       printf("roznica =%.2lf\n",(*(wsk+1))(a,b));
       printf("iloczyn =%.2lf\n",(*(wsk+2))(a,b));
       printf("iloraz=%.2lf\n",(*(wsk+3))(a,b));
       printf("podaj ponownie 2 liczby zmiennoprzecikowe lub litere aby zakonczyc:\n");
    }

    return 0;
}
double suma(double a,double b)
{
    return a+b;
}
double roznica(double a,double b)
{
   return a-b;
}printf("podaj 2 liczby zmiennoprzecikowe\n");
double iloczyn(double a,double b)
{
    return a*b;
}
double iloraz(double a,double b)
{
    return a/b;
}
