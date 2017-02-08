#include <stdio.h>
#include <stdlib.h>

int main()
{
    int majatek,lata;
    char zwierze[40];

    printf("Prosze podaj mi swoj majatek w zl i swoj wiek\n");
    scanf("%d %d",&majatek,&lata);
        printf("Prosze podaj mi imie swojego zwierzaka\n");
            scanf("%s",zwierze);
            printf("%d %d %s",majatek,lata,zwierze);


    return 0;
}
