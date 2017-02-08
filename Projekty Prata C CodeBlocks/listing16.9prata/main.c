#include <stdio.h>
#include <stdlib.h>
# define TYLKO_SPRAWDZAM
#define GRANICA 10
int main()
{
    int i;
    int suma=0;
    for(i=0;i<=GRANICA;i++)
    {
        suma+=i;
        #ifdef TYLKO_SPRAWDZAM
        printf("suma=%d,i=%d\n",suma,i);
        #endif
    }
         printf("suma=%d\n",suma);

    return 0;
}
