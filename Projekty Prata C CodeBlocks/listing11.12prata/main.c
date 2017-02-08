#include <stdio.h>
#include <stdlib.h>
void wyswietl1(const char *lancuch);
int wyswietl2(const char *lancuch);

int main()
{
    wyswietl1("gdybym mial ogiera, ");
    wyswietl1("to bym go dopuszczal do klaczy\n");
    printf("naliczono %d znakow\n",wyswietl2("gownojad"));
    return 0;
}
void wyswietl1(const char *lancuch)
{
    while(*lancuch)
    {
        putchar(*lancuch++);
    }
}
int wyswietl2(const char *lancuch)
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
