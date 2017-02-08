#include <stdio.h>
#include <stdlib.h>

void dodaj(double x,double y);
void odejmij(double x,double y);
void pomnoz(double x,double y);
void podziel(double x,double y);
int podajwybor(void);

int main()
{
    int ch;
    float x,y;
    void(*wsk[4])(double x, double y)= {dodaj,odejmij,pomnoz,podziel};
    printf("podaj swoj wybor");
    while((ch=podajwybor())!=5)
    {
        printf("podaj x:\n");
        scanf("%f",&x);
        printf("podaj y:\n");
        scanf("%f",&y);
        switch(ch)
        {
        case 1:
            (*wsk)(x,y);
            break;
        case 2:
            (*(wsk+1))(x,y);
            break;
        case 3:
            (*(wsk+2))(x,y);
            break;
        case 4:
            (*(wsk+3))(x,y);
            break;
        default:
            printf("zly wybor torbo!");
            break;
        }
    }
    return 0;
}

void dodaj(double x,double y)
{
    printf("x+y=%.2f\n",x+y);
}
void odejmij(double x,double y)
{
    printf("x-y=%.2f\n",x-y);
}
void pomnoz(double x,double y)
{
    printf("x*y=%.2f\n",x*y);
}
void podziel(double x,double y)
{
    if(y==0)
    {
        printf("nie dziele przez 0 torbo!\n");
    }
    else
    {
        printf("x/y=%.2f\n",x/y);
    }
}
int podajwybor(void)

{
    int ch;
    printf("wybierz jeden z ponizszych opcji:\n");
    printf("wybierz 1) aby dodac 2 liczby:\n");
    printf("wybierz 2) aby odjac 2 liczby:\n");
    printf("wybierz 3) aby pomnozyc 2 liczby:\n");
    printf("wybierz 4) aby podzielic 2 liczby:\n");
    printf("wybierz 5) aby zakonczyc\n");
    while((scanf("%d",&ch))!=1)
    {
        printf("popraw sie prosze");
    }
    return ch;
}
