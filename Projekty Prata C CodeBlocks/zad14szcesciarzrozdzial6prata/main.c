#include <stdio.h>
#include <stdlib.h>
/*      chlop wygral banke w totka,wrzucil na lokate 8%.co roku wyplaca 100.000zl,
        kiedy mu sie skonczy hajsiwo?*/
int main()
{
        float kapital=1000000.00; /*kapital poczatkowy chlopa*/
        int lata=0; /*licznik lat*/
        float x,y; /*zmienne pomocnicze*/
        int procent=8; /*procent skladany*/
        float procent_wzgledny=0.08; /*procent skladany wzgledny*/
        float wyplata=100000.00;/*ile sie chce wyplacac co rok*/
            printf("hajs przed wplata na konto to %.2f zl\n",kapital);
    while(kapital>100000)
    {
        kapital*=(1+procent_wzgledny);
        x=kapital; /*bufor operacyjny 1*/
        y=x-100000; /*bufor operacyjny 2*/
        kapital=y; /*wynik na koncie po przyroscie odsetek i wyplacie*/
        lata++;
            printf("po %d roku chlop mial by %.2f zl hajsu wyplacajac %.2f zostalo by mu %.2f zl hajsu\n",lata,x,wyplata,y);

    }
            printf("chlop splukany jak szmata:\n");
        kapital*=(1+procent_wzgledny);
        x=kapital; /*bufor operacyjny 1*/
        y=x-100000; /*bufor operacyjny 2*/
        kapital=y; /*wynik na koncie po przyroscie odsetek i wyplacie*/
        lata++;
            printf("po %d roku chlop mial by %.2f zl hajsu wyplacajac %.2f bylby zadluzony na %.2f zl hajsu \n",lata,x,wyplata,-y);
            printf("wiec moglby wyplacic co najwyzej %.2f zl i rozwiazac umowe z bankiem\n",x);

    return 0;
}
