#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("liczba wieksza z %d i %d to %d\n",3,5,imax(3));
    printf("liczba wieksza z %d i %d to %d\n",3,5,imax(3.0,5.0));
    return 0;
}
int imax(a,b)
{
    int max;
    if(a>b)
        max=a;
    else
        max=b;
    return max;
}
