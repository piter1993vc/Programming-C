#include <stdio.h>
#include <stdlib.h>
#define ROZMIAR 4
void sumuj(int origin1[],int origin2[],int target[],int elements);
void pokaz(int target[],int elements);
int main()
{
    int tab1[ROZMIAR]={2,4,5,8};
    int tab2[ROZMIAR]={1,0,4,6};
    int tab3[ROZMIAR];
   sumuj(tab1,tab2,tab3,ROZMIAR);
   printf("tablica docelowa to:\n");
   pokaz(tab3,ROZMIAR);
    return 0;
}
void sumuj(int origin1[],int origin2[],int target[],int elements)
{
    int i;
    for(i=0;i<elements;i++)
        target[i]=origin1[i]+origin2[i];
}
void pokaz(int target[],int elements)
{
    int i;
    for(i=0;i<elements;i++)
        printf("%d ",target[i]);
}
