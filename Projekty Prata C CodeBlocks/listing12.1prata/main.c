#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=30;
    printf("x w zewnetrznym bloku: %d\n",x);
    {
        int x=77;
        printf("x w wewnetrznym bloku :%d\n",x);
    }
     printf("x w zewnetrznym bloku: %d\n",x);
while(x++<33)
{
    int x=100;
    x++;
    printf("x w petli loop: %d \n",x);
}
 printf("x w zewnetrznym bloku: %d\n",x);


    return 0;
}
