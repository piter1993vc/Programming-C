#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct rok
{
    char nazwa[20];
    int dni;
    int nr_miesiaca;
};
int licz(struct rok *liczba,const char *lan);
int main()
{
    char lancuch[20];
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
    puts("podaj nazwe miesiaca");
    gets(lancuch);
    printf("wynik to %d\n",licz(&miesiace[0],lancuch));
    return 0;
}
int licz(struct rok *liczba,const char *lan)
{
   int suma=0;
   int i=0;


   while(i<12)
   {
       suma+=liczba->dni;
       i++;
       if(strcmp(liczba->nazwa,lan)==0)
       {
        break;
       }
       liczba++;

   }
   return suma;
}














