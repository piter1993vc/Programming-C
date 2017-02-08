#include <stdio.h>
#include <stdlib.h>
int pobierz_wybor(int dol,int gora);
void menu(void);
int main()
{
    char odp;
    menu();
    while((odp=pobierz_wybor(1,4))!='4')
    printf("podoba mi sie opcja %d\n",odp);



    return 0;
}
void menu(void)
{
    int ch;
    printf("wybierz 1 z ponizszych opcji\n");
    printf("1)kopiowanie plikow                       b)przenoszenie plikow\n");
    printf("c)usuwanie plikow                              q) koniec\n");
    printf("Podaj numer wybranej opcji\n");

}
int pobierz_wybor(int dol,int gora)
{
    int odp;
    scanf("%d",&odp);
    while(odp<dol||odp>gora)
    {
        while(getchar()!='\n');
        printf("%d nie jest poprawnym wyborem\n",odp);
        menu();
        scanf("%d",&odp);
    }
}
