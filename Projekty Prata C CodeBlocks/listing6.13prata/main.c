#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    do
    {
        scanf("%c",&ch);
        printf("%c\n",ch);
    } while(ch!='#');
    printf("Hello world!\n");
    return 0;
}
