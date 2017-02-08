#include <stdio.h>
#include <stdlib.h>
#define STRONA 336
#define SLOWA 65611

int main(void)
{
    short num=STRONA;
    short mnum=-STRONA;

    printf("%hd %hu %hd %hu\n",num,num,mnum,mnum);
    printf("%d %c\n",num,num);
    printf("%d %hd",SLOWA,SLOWA);
    return 0;
}
