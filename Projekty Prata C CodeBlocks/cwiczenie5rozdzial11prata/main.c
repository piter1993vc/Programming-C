#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int rodnik( char znak,char *lan);
int main()
{

    char lancuch[40]="lancuszek";
char znak='o';
printf("flaga kontrolna =%d\n",rodnik(znak,lancuch));
    return 0;
}
int rodnik( char znak,char *lan)
{
    int i;
int flaga=0;
    for(i=0;i<strlen(lan);i++)
    {
        if(lan[i]==znak)
            flaga=1;
    }

        return flaga;





}
