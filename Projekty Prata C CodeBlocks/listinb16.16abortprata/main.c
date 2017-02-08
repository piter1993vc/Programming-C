#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
int main()
{
    double x,y,z;
    puts("podaj pare liczb(0 0 konczy program:");
    while((scanf("%lf%lf",&x,&y))==2&&(x!=0||y!=0))
    {
        z=x*x-y*y ;/*powinno byc+*/
        if(z<0)
        {
            puts("z<0");
            abort();
        }
        printf("wynik wynosi %lf\n",sqrt(z));
        puts("podaj kolejna pare liczb:");

    }
    printf("Hello world!\n");
    return 0;
}
