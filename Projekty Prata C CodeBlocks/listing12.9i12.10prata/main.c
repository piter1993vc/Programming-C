#include <stdio.h>
#include <stdlib.h>
extern int rand1();
extern void srand1(int ziarno);
int main()
{
    int ziarno;
    int liczba;
    printf("podaj wartosc ziarna\n");
    while(scanf("%d",&ziarno)==1)
    {
        srand1(ziarno);
            for(liczba=0;liczba<5;liczba++)
        printf("%d\n",rand1());
        printf("podaj wartosc ziarna\n");
    }
    printf("koniec\n");

    return 0;
}
