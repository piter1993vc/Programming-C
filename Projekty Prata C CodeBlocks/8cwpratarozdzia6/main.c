#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   scanf("%c",&ch);
   while(ch!='k')
   {
       printf("%c",++ch);
       scanf("%c",&ch);
   }
    printf("Hello world!\n");
    printf("%5c%5c%5c%5c%5c%5c",'c',122,101,115,99,'\41','$');
    return 0;
}
