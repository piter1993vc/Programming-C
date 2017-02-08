#include <stdio.h>
#include <stdlib.h>
void wieksze(double*a,double*b);
int main()
{
    double x,y;
    printf("podaj x typu zmiennoprzecinkowego \n");
    scanf("%le",&x);
    printf("podaj y typu zmiennoprzecinkowego \n");
    scanf("%le",&y);
    printf("x=%le y=%le\n",x,y);
    wieksze(&x,&y);
        printf("teraz x=%lg a y=%lg\n",x,y);
    return 0;
}
void wieksze(double*a,double*b)
{
    double wieksze;
    wieksze=*a;
    if(*b>wieksze) wieksze=*b;
    *a=wieksze;
    *b=wieksze;
}
