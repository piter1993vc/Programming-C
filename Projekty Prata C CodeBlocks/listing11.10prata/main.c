#include <stdio.h>
#include <stdlib.h>
void wyswietl(const char *lancuch);
int main()
{


    wyswietl("pizza");

    return 0;
}
void wyswietl(const char *lancuch)
{
    while(*lancuch!='\0')
        putchar(*lancuch++);
}
