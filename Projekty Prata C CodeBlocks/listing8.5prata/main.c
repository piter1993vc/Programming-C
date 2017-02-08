#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int wyswietl(char ch,int x, int y);
int main()
{
    int znak;
    int rzedy,kolumny;
    printf("podaj znak oraz 2 liczby\n");
    while((znak=getchar())!=EOF)
    {
        if(isalpha(znak))
        {

    if((scanf("%d %d",&rzedy,&kolumny))!=2)
        continue;
    wyswietl(znak,rzedy,kolumny);
    printf("podaj kolejny  oraz 2 liczby\n");
    printf("aby zakonczyc zasymulij EOF\n");
        }
    }


    return 0;
}
int wyswietl(char ch,int x,int y)
{
    int rzad,kolumny;
    for(rzad=1;rzad<=x;rzad++)
    {
        for(kolumny=1;kolumny<=y;kolumny++)

                putchar(ch);
                putchar('\n');



    }

}
