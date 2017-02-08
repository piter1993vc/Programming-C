#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *rodnik(  char *lan1, char *lan2);
int main()
{
char tab1[10]="afera";
char tab2[10]="fex";
printf("adres %p to adres litery f w tab1\n",&tab1[1]);

printf("adres wyjsciowy =%p\n",rodnik(tab1,tab2));
    return 0;
}
char *rodnik(char *lan1, char *lan2)
{
    int i,j,m;
    int k=strlen(lan2);
    int l=strlen(lan1);
    int flaga=0;

printf("k=%d l=%d\n",k,l);
    for(i=0;i<l;i++)
    {

      for(j=0;j<k;j++)
      {
         if(lan1[i]==lan2[j])
            {
             flaga=1;
                goto skok;
            }
      }
    }
    skok:
printf("i=%d j=%d\n",i,j);
printf("flaga =%d\n",flaga);
    if(flaga==1)
    {
        for(m=0;m<k;m++)
        {
        if(lan1[i+m]!=lan2[j+m])
        flaga=0;
        }
    }
printf("flaga=%d\n",flaga);

printf("i=%d j=%d\n",i,j);
    if(flaga)
        return &lan1[i];
        else
            return NULL;




}
