#include <stdio.h>
#include <stdlib.h>
void kopia1(int tab1[],int tab2[],int n);
void kopia2(int *tab1,int *tab2,int n);
void pokaz(int tab[],int n);
int main()
{
    int tab[6]={1,2,33,4,35,6};
    int kopiaA[6];
    int kopiaB[6];
    kopia1(tab,kopiaA,6);
    kopia2(tab,kopiaB,6);
printf("kopia A wyglada tak\n");
pokaz(kopiaA,6);
printf("kopia b wyglada tak\n");
pokaz(kopiaB,6);
    return 0;
}
void kopia1(int tab1[],int tab2[],int n)
{
    int i;
    for(i=0;i<n;i++)
        tab2[i]=tab1[i];
}
void kopia2(int *tab1,int *tab2,int n)
{
    int i;
    for(i=0;i<n;i++)
        *(tab2+i)=*(tab1+i);
}
void pokaz(int tab[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
           printf("%d",tab[i]);
           putchar(' ');

    }


    puts("\n");
}
