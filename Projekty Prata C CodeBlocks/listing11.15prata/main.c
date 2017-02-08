#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROZMIAR 30
#define ROZMIAR_OWADY 17

int main()
{
    char kwiaty[ROZMIAR];
    char owady[ROZMIAR_OWADY];
    char *dodatek="smierdza jak stare buty";
    int wolne;
    puts("jakie kwiaty lubisz najbardziej?");
    gets(kwiaty);
    if((strlen(kwiaty)+strlen(dodatek)+1)<=ROZMIAR)
        strcat(kwiaty,dodatek);
        puts(kwiaty);
    puts("jake owady lubisz najbardziej?.");
    gets(owady);
    wolne=ROZMIAR_OWADY-strlen(owady)-1;
    strncat(owady,dodatek,wolne);
    puts(owady);

    printf("Hello world!\n");
    return 0;
}
