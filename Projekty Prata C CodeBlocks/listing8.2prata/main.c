#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    printf("wprowadzaj znaki  program zakoczy jezeli napotka EOF\n");
    while((ch=getchar())!=EOF)
       putchar(ch);
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
