#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    printf("poczatkowo n=%d\n",n);
for(int n=1;n<3;n++)
    printf("petla 1: n=%d\n",n);
    printf("po petli 1: n=%d\n",n);
    for(int n=1;n<3;n++)
    {
         printf("petla 2: indeks n=%d\n",n);
         static int n=30; /* modyfikacja listingu dopisane static*/
         printf("petla 2: n=%d\n",n);
         n++;



    }
       printf("po petli 2: n=%d\n",n);


    return 0;
}
