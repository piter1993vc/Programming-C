#include <stdio.h>
#include <stdlib.h>
int suma(int a,int b);
int main()
{
    int x;
    int y;
    int z;

    printf("podaj 1 liczbe cakowita\n");
    scanf("%d",&x);
    printf("podaj 2 liczbe cakowita\n");
    scanf("%d",&y);
    z=suma(x,y);
    printf("x+y=%d\n",z);
    return 0;
}
int suma(int a,int b)
{
    return a+b;
}
