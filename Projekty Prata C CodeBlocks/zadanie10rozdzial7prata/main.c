#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("podaj znak q,c,g lub b aby zakonczyc wpisz #\n");
    while((ch=getchar())!='#')
    {
        if(ch!='\n')
        {
            printf("krok1\n");
            if(ch=='b')
                break;
                    if(ch!='c')
                    {
                        if(ch!='g')
                        printf("krok2\n");
                        printf("krok3\n");
                    }
        }
    }
    printf("koniec\n");
    return 0;
}
