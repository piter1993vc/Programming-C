#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int i;
    float f1;
    f1=i=ch='A';
    printf("ch=%c,i=%d,f1=%2.2f\n",ch,i,f1);
    ch=ch+1;
    i=f1+2*ch;
    f1=2*ch+i;
    printf("ch=%c,i=%d,f1=%2.2f\n",ch,i,f1);
    ch=52122205.17;
    printf("Teraz ch=%c\n",ch);





    return 0;
}
