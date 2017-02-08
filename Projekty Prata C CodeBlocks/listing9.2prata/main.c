#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NAZWA "Wies w miescie"
#define ULICA "Wiejska"
#define MIEJSCOWOSC "Warszawa"
#define ZNAK '*'
#define GRANICA 65
#define ODSTEP ' '
void n_znak(char ch,int max);

int main()
{
    int odstepy;



   n_znak(ZNAK,GRANICA);
      putchar('\n');
   n_znak(ODSTEP,25);
printf("%s\n",NAZWA);
   odstepy=(65-strlen(ULICA))/2;
   n_znak(ODSTEP,odstepy);
   printf("%s\n",ULICA);
   n_znak(ODSTEP,(65-strlen(MIEJSCOWOSC))/2);
   printf("%s\n",MIEJSCOWOSC);
   n_znak(ZNAK,GRANICA);
    return 0;
}
void n_znak(char ch,int max)
{
    int licznik;
    for(licznik=1;licznik<=max;licznik++)
        putchar(ch);
}
