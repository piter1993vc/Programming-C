#include <stdio.h>
#include <stdlib.h>
#define TAK 1
#define NIE 0
int main()
{
    char ch;
    int flaga=NIE;
    int licznik=0;
    printf("Wpisz zdania a program wyszuka frazy \"an\" jezeli sa,aby zakonczyc napisz # i enter\n");
    while((ch=getchar())!='#')
    {

        if(ch=='a'&&flaga==NIE)
        {
            flaga=TAK;
            continue;
        }
        if(ch=='n'&&flaga==TAK)
        {
           flaga=NIE;
            licznik++;
        }
           else
                flaga=NIE;
                if(ch=='\n')
                printf("wpisz kolejne zdania albo # aby zakonczyc\n");
    }
    printf("znaleziono fraze \"an\" %d razy\n",licznik);
    return 0;
}
