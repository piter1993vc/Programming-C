#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int proba=1;

    printf("wpisz liczbe od 1 do 100 a ja sprobuje ja zgadnac:\n");
    printf("wpisz t jezeli moja proba jest udana");
    printf("\nlub n jezeli sie nie powiodla:\n");
    printf("czy twoja liczba jest rowna %d\n",proba);
    while((ch=getchar())!='t')
    {
        printf("no dobrze czy twoja liczba jest rowna %d\n",++proba);
    }
    printf("brawo wiedzialem ze to ta\n");

    return 0;
}
