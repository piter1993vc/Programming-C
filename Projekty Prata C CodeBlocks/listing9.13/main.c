#include <stdio.h>
#include <stdlib.h>
void zamiana(int u,int v);

int main()
{
    int x=5;
    int y=14;
    printf("teraz x=%d a y=%d\n",x,y);
    zamiana(x,y);
    printf("teraz x=%d a y=%d\n",x,y);
    return 0;
}
void zamiana(int u,int v)
{
    int bufor;

     bufor=u;
     u=v;
     v=bufor;


}
