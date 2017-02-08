#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ch;
    int ascii;
    int iterator;
    printf("Wpisz wiersz znakow na klawiaturze i zakoncz enterem:\n");
    while((ch=getchar())!='\n')
    {
        ascii=ch%26;
        iterator=0;
        while(iterator++<=(30-ascii))
            putchar(' ');
        iterator=0;
        while(iterator++<=(2*ascii+1))
            putchar(ch);
        printf("\n");
    }
    printf("Good night good luck.\n");
    return 0;
}
