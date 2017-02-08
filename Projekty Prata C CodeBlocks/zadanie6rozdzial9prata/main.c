#include <stdio.h>
#include <stdlib.h>
void zamiana(int*a,int*b);
int main()
{
    int x;
    int y;




    printf("podaj 1 liczbe \n");
    scanf("%d",&x);
    printf("podaj 2 liczbe \n");
    scanf("%d",&y);

    printf("x=%d\n",x);
    printf("y=%d\n",y);
    zamiana(&x,&y);
    printf("teraz x=x+y=%d\n",x);
    printf("teraz y=x-y=%d\n",y);

    return 0;
}
void zamiana(int*a,int*b)
{
    int bufor;
    bufor=*a+*b;
    *b=*a-*b;
    *a=bufor;

}
