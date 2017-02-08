#include <stdio.h>
#include <stdlib.h>
#define STAWKA_1 17850
#define STAWKA_2 23900
#define STAWKA_3 29750
#define STAWKA_4 14875
#define PROC_1 0.15
#define PROC_2 0.28

int main()
{
    int dochody;
    float podatek;
    int wybor;
    int stawka;
    printf("Amerykanski system podatkowy z roku 1988.\n");
    Poczatek: printf("Prosze wybrac z dostepnych nizej kategorii:\n");
    printf("%-25s %26s\n%25s %25s\n%-25s %25s\n","1) Stan wolny.","2) Glowa rodziny.","3) Malzenstwo, rozlicznie wspolne.",
             "4) Malzenstwo, rozliczenie osobne.","5) Wyjscie.","Litera,znak tez konczy.");
             while((scanf("%d",&wybor))==1)
             {
                 switch(wybor)
                 {
                    case 1: stawka=STAWKA_1; break;
                    case 2: stawka=STAWKA_2; break;
                    case 3: stawka=STAWKA_3; break;
                    case 4: stawka=STAWKA_4; break;
                    case 5:  goto koniec;
                    default: printf("Wpisales zla wartosc wyboru popraw sie prosze:\n"); goto Poczatek;
                 }
                 printf("Podaj swoje dochody brutto:\n");
                 scanf("%d",&dochody);
                 if(dochody<=stawka)
                    podatek=dochody*PROC_1;
                 else
                    podatek=stawka*PROC_1+(dochody-stawka)*PROC_2;
                 printf("Podatek ktory musisz zaplacic wynosi: %.2f zl.\n",podatek);
                printf("Podaj kolejny wybor:\n");
                printf("%-25s %26s\n%25s %25s\n%25s %25s\n","1) Stan wolny.","2) Glowa rodziny.","3) Malzenstwo, rozlicznie wspolne.",
                         "4) Malzenstwo, rozliczenie osobne.","5) Wyjscie.","Litera,znak tez konczy.");

             } printf("Wpisales litere lub znak.\n");


koniec:
    printf("Dziekuje za wspolprace \"Good Night Good Luck\".\n");
    return 0;
    getchar(); getchar();
}
