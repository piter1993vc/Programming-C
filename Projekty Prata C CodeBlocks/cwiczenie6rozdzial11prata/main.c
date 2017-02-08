#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 80
char *rodnik( char *lan1,char *lan2,int ile);
int main()
{
char tab1[MAX];
char tab2[]="afera jest niekontrolowana";
char *adres;


printf("adres wyjsciowy =%p\n",rodnik(tab1,tab2,strlen(tab2)));
    return 0;
}
char *rodnik( char *lan1,char *lan2,int ile)
{
    int i;

    for(i=0;i<ile;i++)
    {

          lan1[i]=lan2[i];
    }

        return lan1;




}
