#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *zwracana( char *lan1,char *lan2);
int main()
{
    char *adres;
    char lancuch1[40]="lancuszek";
    char lancuch2[40]="k";
   adres=zwracana(lancuch1,lancuch2);
   printf("adres znaku to %p\n",adres);
    return 0;
}
char *zwracana( char *lan1, char *lan2)
{
    int i,j;
    char *wsk;
    wsk=NULL;
    for(i=0;i<strlen(lan1);i++)
    {
        for(j=0;j<strlen(lan2);j++)
        {
            if(lan1[i]==lan2[j])
                wsk=&lan2[j];
        }
    }
    return wsk;
}
