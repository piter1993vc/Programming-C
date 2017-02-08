#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("wprowadzaj znaki  program zakoczy jezeli napotka #\n");
    while((ch=getchar())!='#')
       putchar(ch);
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
