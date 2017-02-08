#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#define DOLNA 5
#define GORNA 45
void rzad_zn(char ch,int i,int j);
bool granice(int i,int j,int dolna,int gorna);
int main()
{
    char ch;
    int a,b,k;
    printf("Printf Podaj znak oraz 2 liczby calkowite mniejsza i wieksza od 5 do 45,eof zamiast znaku aby zakonczyc\n");
    while((ch=getchar())!=EOF)
    {
        if(!isspace(ch))
        {
            skok:
            while((scanf("%d %d",&a,&b))!=2)
            break;
            printf("a=%d,b=%d\n",a,b);
          k=granice(a,b,DOLNA,GORNA);
          printf("wynik dla granic to %d\n",k);
            if(!granice(a,b,DOLNA,GORNA))
            {
                 printf("popraw sie synek\n");
            goto skok;

            }


            rzad_zn(ch,a,b);


        }
        while(getchar()!='\n')
            continue;
          printf("\npodaj nowy znak i granice\n");
    }
    printf("koniec\n");

    return 0;
}
void rzad_zn(char ch,int i,int j)
{
    int licznik1,licznik2;
    for(licznik1=1;licznik1<i;licznik1++)
        {
             for(licznik2=i;licznik2<=j;licznik2++)
        putchar(ch);
        printf("\n");
        }

}
bool granice(int i,int j,int dolna,int gorna)
{
    bool flaga =true;
    if(i<dolna)
    flaga=false;
    if(j>gorna)
        flaga=false;
    if(i>j)
        flaga=false;
if(i==j)
    flaga=false;
    return flaga;

}
