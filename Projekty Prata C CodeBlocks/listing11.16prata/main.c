#include <stdio.h>
#include <stdlib.h>
#define ODPOWIEDZ "Grant"
int main()
{
    char proba[40];
    puts("zgadnij kto jest pochowany w grobowcu Granta");
    gets(proba);
    while(proba!=ODPOWIEDZ)
    {
        puts("zla odpowiedz popraw sie prosze");
        gets(proba);
    }
    puts("dobrze zgadles");
    return 0;
}
