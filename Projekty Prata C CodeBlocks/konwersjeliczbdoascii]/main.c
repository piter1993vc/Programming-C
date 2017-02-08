#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab1[25];
    char tab2[30];
    printf("Hello world!\n");
    sprintf(tab1,"%d,%c",12,'A');
    printf("%s\n",tab1);
    return 0;
}
