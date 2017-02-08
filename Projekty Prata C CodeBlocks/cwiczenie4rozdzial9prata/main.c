 #include <stdio.h>
#include <stdlib.h>
double sr_harmoniczna(double a,double b);
double pobierz_liczbe(void);

int main()
{
    double x,y;
    printf("podaj 1 liczbe\n");
    x=pobierz_liczbe();
    if(x==0.0)
    {
      printf("bez zer prosze podaj 1 liczbe ponownie\n");
          x=pobierz_liczbe();
    }
    printf("x=%lf\n",x);

  printf("podaj 2 liczbe\n");
      y=pobierz_liczbe();
       if(y==0.0)
    {
      printf("bez zer prosze podaj 2 liczbe ponownie\n");
          y=pobierz_liczbe();
    }
        printf("y=%d\n",y);
    printf("srednia harmoniczna wynosi %lf\n",sr_harmoniczna(x,y));


    return 0;
}
double sr_harmoniczna(double a,double b)
{
       double c,d,e;
    printf("a=%d\n",a);

    c=(double)1/a;
    printf("c=%lf\n",c);
    d=(double)1/b;
    e= (c+d)/2;
    printf("e=%lf\n",e);

    return 1/e;
}
double pobierz_liczbe(void)
{
    double ch;
    char znak;
    while((scanf("%lf",&ch))!=1)
    {
        while(znak=getchar()!='\n')
            putchar(ch);
        printf("nie jest liczba podaj liczbe\n");


    }
    return ch;
}
