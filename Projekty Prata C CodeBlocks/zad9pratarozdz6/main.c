#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 8

int main()
{

    int dwojkami[ROZMIAR];
    int index;
    int n,m;
    for(n=1;n*n<60;n+=3)
        printf("%5d",n);
        printf("\n");
        for(n=1,m=5;n<m;n*=2,m+=2)
        {
              printf("%3d %3d",n,m);
            printf("\n");

        }
        for(n=4;n>0;n--)
        {
            for(m=0;m<=n;m++)
                printf("+");
            printf("\n");
        }
        printf("\n");
        /*zadanie 12 prata rozdzial 6 pytania sprawdzajace noe*/
        for(index=1;index<=ROZMIAR;index++)
            dwojkami[index-1]=2*index;
        for(index=0;index<ROZMIAR;index++)
            printf("%5d",dwojkami[index]);


    printf("Hello world!\n");
    return 0;
}
