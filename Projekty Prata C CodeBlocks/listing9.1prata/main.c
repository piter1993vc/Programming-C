#include <stdio.h>
#include <stdlib.h>
#define GRANICA 70
#define NAZWA "Wies w miesice"
#define ULICA "Wiejsca"
#define MIEJSCOWOSC "Warszawa"
void gowno(void);

int main()
{
    gowno();
    printf("%s\n",NAZWA);
    printf("%s\n",ULICA);
    printf("%s\n",MIEJSCOWOSC);
    gowno();
    return 0;
}
void gowno(void)
{
    int licznik;
    for(licznik=1;licznik<=GRANICA;licznik++)
        putchar('*');
    putchar('\n');
}
