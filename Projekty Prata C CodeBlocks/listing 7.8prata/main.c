/*oblicza ilosc puszek farby na dana powierzchnie z uwzglednieniem zasobow 1 puszki na m^2,<--gdy wyliczy niepelna puszke to nalezy dokupic kolejna gdzyz sklep nie sprzedaje niepelnych puszek*/
#include <stdio.h>
#include <stdlib.h>
#define MOC 21 /*powierzchnia mozliwa do pomalowania przez 1 puszke farby*/

int main()
{
    int powierzchnia; /*definicja zmiennej powierzchni*/
    int ilosc_puszek; /*definicja zmiennej wyliczanej ilosc puszek*/
    printf("prosze podaj ilosc metrow kwadratowych do pomalowania lub wstaw znak aby zakonczyc:\n"); /*strumien wejsciowy do komputera*/
    while((scanf("%d",&powierzchnia))==1) /*warunek na obliczanie ilosci puszek*/
    {
        ilosc_puszek=powierzchnia/MOC; /*liczba calkowita puszek z odliczeniem "modulo" czesci ulamkowej*/
        ilosc_puszek+=(powierzchnia%MOC!=0)?1:0; /*gdy "modulo "!=0 to trzeba doliczyc dodatkowa puszke,uzycie operatora wyrazeniowego ?:<<--fajna sprawa zamiast if else*/
        printf("aby pomalowac %d powierchni nalezy uzyc %d %s farby\n",powierzchnia,ilosc_puszek,(ilosc_puszek==1)?"puszke":"puszek"); /*wynik programu*/

        printf("prosze podaj kolejna powierchnie lub wstaw znak litere aby zakonczyc:\n"); /*prosba o podanie kolejnej powierzchni -->program interaktywny <--*/
    }
    printf("dziekuje za wspolprace"); /*zakonczenie programu poprzez wpisanie znaku "nie alfa"*/
    return 0;
}
