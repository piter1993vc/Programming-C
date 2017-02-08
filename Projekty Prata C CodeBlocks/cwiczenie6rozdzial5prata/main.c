#include <stdio.h>
#include <stdlib.h>

int main()
{
    int liczba;
    float sr_p;
    float sr_n;
    int warunek;
        int sum_p=0;
        int sum_n=0;
        int ilosc_p=0;
        int ilosc_n=0;
    printf("Podaj liczbe calkowita lub wpisz # i enter aby zakonczyc: \n");
    while((scanf("%d",&liczba))==1&&liczba!='#')
    {
        if(liczba%2==0)
            warunek=1;
        else warunek=2;
        switch(warunek)
        {
            case 1: ilosc_p++; sum_p+=liczba;break;
            case 2: ilosc_n++; sum_n+=liczba; break;

        }
        printf("podaj kolejna liczbe calkowita lub # aby zakonczyc\n");


    }
    if(ilosc_p==0)
        sr_p=0;
    else
    sr_p=(float)sum_p/ilosc_p;
    if(ilosc_n==0)
        sr_n=0;
    else
    sr_n=(float)sum_n/ilosc_n;
    printf("wykryto: %d liczb parzystych % d liczb nieparzystych, srednie wynosza %.2f parzystych\n"
             "i %.2f nieparzystych\n",ilosc_p,ilosc_n,sr_p,sr_n);

    return 0;
}
