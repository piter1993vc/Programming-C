#include <stdio.h>
#include <stdlib.h>
#define DR_DATA

int main()
{
    printf("Hello world!\n");
    #ifdef DR_DATA

    printf("data: %s\n",__DATE__);


    #endif // DR_DATA

    return 0;
}
