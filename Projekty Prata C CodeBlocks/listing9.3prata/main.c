#include <stdio.h>
#include <stdlib.h>
int min(int a,int b, int c, int d);

int main()
{
    int u,w,x,y,z;

    printf("Podaj 4 liczby calkowite\n");
    while((scanf("%d %d %d %d",&u,&w,&x,&y))==4)
    {
        z=min(u,w,x,y);
        printf("podales %d,%d, %d oraz %d liczba najmniejsza to %d\n",u,w,x,y,z);
        printf("podaj kolejne liczby:\n");
    }

    return 0;
}
int min(int a,int b, int c,int d)
{
   int min;
   min=a;
   if(b<min) min=b;
   if(c<min) min=c;
   if(d<min) min=d;
   return min;


}
