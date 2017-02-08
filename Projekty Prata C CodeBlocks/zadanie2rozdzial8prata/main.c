#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;



    printf("podaj znaki po spacjach  lub eof aby zakonczyc\n");
    while((ch=getchar())!='#')
    {
        if(ch=='\n')
            continue;

             printf("%c to %d",ch,ch);



    }


    return 0;
}
