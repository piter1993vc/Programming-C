#include <stdio.h>
#include <stdlib.h>
#define STRONY 732

int main()
{
    printf("*%d*\n",STRONY);
    printf("*%2d*\n",STRONY);
    printf("*%10d*\n",STRONY);
    printf("*%-10d*\n",STRONY);
    printf("*%010d*\n",STRONY);
    printf("*%.5d*\n",STRONY);
    return 0;
}
