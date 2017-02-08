#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("podaj paniczu znak q,c,g lub b zakoncz znakiem # \n");
    while((ch=getchar())!='#')
    {
        if(ch=='\n')
            continue;
        printf("krok1\n");
        if(ch=='c')
            continue;
        else if(ch=='b')
            break;
        else if(ch=='g')
            goto ostatni_krok;
        printf("krok2\n");
        ostatni_krok: printf("krok3\n");
    }
    printf("koniec\n");


    return 0;
}
