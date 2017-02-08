#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int iterator=0;
    printf("wpisuj znaki lub # aby zakonczyc\n");
    while((x=getchar())!='#')
    {
        if(x=='\n')
            continue;
        if(x=='.')
        {
           printf("!");
           iterator ++;
        }
         else if(x=='!')
         {
             putchar(x); putchar(x);
             iterator++;
         }
         else putchar(x);


    }
    printf("Ilosc zamian=%d\n",iterator);
    printf("\"Good Night Good Luck\" Dying Light-).\n");
    return 0;
}
