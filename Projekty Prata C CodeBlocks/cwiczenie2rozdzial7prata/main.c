#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int licznik=0;
    printf("wpisz znaki po spacjach lub # aby zakonczyc:\n");
    while((ch=getchar())!='#')
    {
        if(ch=='\n'||ch==' ')
            continue;
     licznik++;
        printf("%c to %d ,",ch,ch);

        if(licznik!=0&&licznik%8==0)
            printf("\n");

    }
    printf("Good night good luck--)\n");
    return 0;
}
