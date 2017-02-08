#include <stdio.h>
#include <stdlib.h>
void zamiana(int*u,int*v);

int main()
{
    int x=5;
    int y=12;
    printf("x=%d a y=%d\n",x,y);
    zamiana(&x,&y);
    printf("teraz x=%d a y=%d\n",x,y);

    return 0;
}
void zamiana(int*u,int*v)
{
    int bufor;
    bufor=*v;
    *v=*u;
    *u=bufor;
}
