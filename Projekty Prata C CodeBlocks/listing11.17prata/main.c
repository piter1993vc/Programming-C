#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ODPOWIEDZ "Grant"
int main()
{
    char proba[40];
    puts("kto zostal pochowany w grobowcu Granta?");
    gets(proba);
    while(strcmp(proba,ODPOWIEDZ)!=0)
    {
        puts("zla odpowiedz popraw sie: ");
        gets(proba);
    }
    puts("dobrze zgadles");
    return 0;
}
