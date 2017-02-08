#include <stdio.h>
#include <stdlib.h>
void kodzik(int liczba,int kod);
int main()
{
    int liczba;
    int kod;
    printf("podaj liczbe cakowita i system liczbowy:\n");
    while((scanf("%d %d",&liczba,&kod))==2)
{
    printf("wynik w systemie %d to:\n",kod);
    kodzik(liczba,kod);
    printf("\npodaj kolejna liczbe i system liczbowy:\n");
}
getchar(); getchar();
    return 0;
}
void kodzik(int liczba,int kod)
{
    int r;
    char wynik;


    r=liczba%kod;
    if(liczba>=kod)
        kodzik(liczba/kod,kod);
if(r>9)
    r+=7;
    wynik='0'+r;
    printf("%c",wynik);

}
