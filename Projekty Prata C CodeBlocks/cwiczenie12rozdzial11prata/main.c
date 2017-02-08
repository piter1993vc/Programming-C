#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i;
    printf("ojej\n");
    for(i=argc;i>0;i--)
        printf("%s\n",argv[i]);
    getchar(); getchar();
    return 0;
}
