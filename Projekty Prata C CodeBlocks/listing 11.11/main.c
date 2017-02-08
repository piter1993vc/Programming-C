#include <stdio.h>
#include <stdlib.h>
int wyswietl(const char *lancuch);
int main()
{
    int num;
    num=wyswietl("pizzeria");
    printf("liczba liter to %d\n",num);
    return 0;
}
int wyswietl(const char *lancuch)
{
    int licznik=0;
    while(*lancuch)
    {
        putchar(*lancuch++);
        licznik++;
    }
    putchar('\n');
    return licznik;
}
