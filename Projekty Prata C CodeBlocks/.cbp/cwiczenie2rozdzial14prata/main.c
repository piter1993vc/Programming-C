#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct rok
{
    char nazwa[20];
    int dni;
    int nr_miesiaca;
};
int licz(struct rok *mamona,int numer,int dzien);
int main()
{
 int numer,dzien;
    struct rok miesiace[12]=
    {
        {"styczen",31,1},
        {"luty",28,2},
        {"marzec",31,3},
        {"kwiecien",30,4},
        {"maj",31,5},
        {"czerwiec",30,6},
        {"lipiec",31,7},
        {"sierpien",31,8},
        {"wrzesien",30,9},
        {"pazdziernik",31,10},
        {"listopad",30,11},
        {"grudzien",31,12}

    };
printf("podaj numer miesiaca\n");
scanf("%d",&numer);
printf("podaj dzien w danym miesiacu\n");
scanf("%d",&dzien);
    printf("wynik to %d\n",licz(&miesiace[0],numer,dzien));
    return 0;
}
int licz(struct rok *mamona,int numer,int dzien)
{
   int suma=0;
   int i;


  for(i=1;i<=numer;i++)
   {
       suma+=(mamona++)->dni;
   }
   suma-=((--mamona)->dni-dzien);
   return suma;
}



