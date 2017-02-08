#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define spr /*kompilacja warunkowa*/
#define MAX 100
void wyswietl_random(int tab[],int max,int ile);
int main()
{
    int array[MAX];
    int i;
    int ile;
    srand(time(NULL));
    for(i=0; i<MAX; i++)
    {
        array[i]=rand()%1000+1;
        #ifdef spr
        printf("%d ",array[i]);
        if((i%10==0)&&i!=0)
            putchar('\n');
            #endif
    }
    printf("\n \n \n");
    printf("ile elementow losowychwyswietlic max 100 : ");
    while((scanf("%d",&ile))!=1||ile<0||ile>100)
    {
        printf("popraw sie suko!!!!!\n");
    }


    wyswietl_random(array,MAX,ile);
    return 0;
}
void wyswietl_random(int tab[],int max,int ile)
{
    int i,a;
    /*pomocna tablica--->*/ int tablica[MAX];
    /*tablica flag do stworzenia tablicy "tablica"---->*/int flagi[MAX];

    /*imicjalizacja flag zerami-->>*/
    for(i=0; i<max; i++)
    {
        flagi[i]=0;
        printf("flagi[%d]=%d\n",i,flagi[i]);
    }
    /*tworzenie tablicy z indeksami do wyswietlenia*/
    #ifdef spr
    printf("tablica indeksow: \n");
    #endif // spr

    for(i=0; i<ile; i++)
    {

        {
            if(flagi[i]==0)
            {
              a=tablica[i]=(int)rand()%max;
            flagi[a]=1;
            }
        }
#ifdef spr
        printf("%d ",tablica[i]);
        if((i%10==0)&&i!=0)
            putchar('\n');
            #endif
    }

    printf("\n \n \n");
/*te flagi ma wyswietlic--->>*/
 for(i=0; i<max; i++)
    {
        printf("flagi[%d]=%d\n",i,flagi[i]);
    }


printf("wynik\n");
    /*wynik-->*/
    for(i=0; i<max; i++)
    {
        {
            if(flagi[i]==1)
            {
                printf("%d ",tab[i]);

            }
        }
    }



}
