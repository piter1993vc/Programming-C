#include <stdio.h>
int main ()
{
    char imie[30];
    int x,y;
    int zmienna=0;
    x=zmienna++;
    zmienna=0;
    y=++zmienna;
    printf("postinkrementacja x=%d,preinkrementacja y=%d\n",x,y);
   int but=13;
    while(++but<20)
    {
        printf("%d to but aktualny\n",but);
        if(but==30) goto skok;
    }
    printf("%d. %d.  %d,1,2,3);
    skok:
4    printf("podaj imie:");
    scanf("%s",imie);
    printf("\n sizeof imie: %d",sizeof(imie));
    return 0;
}