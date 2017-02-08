#include <stdio.h>
#include <stdlib.h>


int main()
{

    char ch;
    scanf("%c",&ch);
    while(ch!='x')
    {
     printf("%c\n",ch);
     scanf("%c",&ch);
    }
    printf("Hello world!\n");
    return 0;
}
