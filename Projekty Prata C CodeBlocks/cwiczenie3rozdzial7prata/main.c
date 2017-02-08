#include <stdio.h>
#include <stdlib.h>


int main()
{
    int liczba;
    int liczba_p=0;
    int liczba_n=0;
    int suma_p=0;
    int suma_n=0;
    float srednia_p;
    float srednia_n;
int warunek;
    printf("Podaj liczbe calkowita lub 0 litere aby zakonczyc:\n");
    warunek=scanf("%d",&liczba);
    while(liczba!=0&&warunek==1)
    {

               if(liczba%2==0)
                {
                    suma_p+=liczba;
                    liczba_p++;
                }
                else
                {
                    suma_n+=liczba;
                    liczba_n++;
                }
        printf("Podaj kolejna liczbe calkowita lub 0 aby zakonczyc:\n");
        warunek=scanf("%d",&liczba);

    }
   if(liczba_p!=0)
    srednia_p=(float)suma_p/liczba_p;
    else srednia_p=0;
   if(liczba_n!=0)
    srednia_n=(float)suma_n/liczba_n;
    else srednia_n=0;

    printf("Liczb parzystych %d, liczb nieparzystych %d, srednia z liczb parzystych %.2f, srednia z nieparzystych %.2f\n",
             liczba_p,liczba_n,srednia_p,srednia_n);
    return 0;
}
