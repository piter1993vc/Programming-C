#include <stdio.h>
#include <stdlib.h>
int max(int a,int b,int c);
int main()
{
    int x,y,z;

        printf("podaj 1 liczbe \n");
    scanf("%d",&x);
    printf("podaj 2 liczbe \n");
    scanf("%d",&y);
        printf("podaj 3 liczbe \n");
    scanf("%d",&z);
    printf("maksymalna liczba to: %d\n",max(z,y,z));

return 0;
}
int max(int a,int b,int c)
{
    int max;
    max=a;
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}
