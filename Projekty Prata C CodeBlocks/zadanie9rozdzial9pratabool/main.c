#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define DOL 1
#define GORA 4
bool zle_granice(int wybor,int a,int b);
int pobierz_wybor(void);
void menu(void);
int main()
{
    int odp;
    menu();
    while((odp=pobierz_wybor())!='4')
    printf("podoba mi sie opcja %d\n",odp);



    return 0;
}
void menu(void)
{
    int ch;
    printf("wybierz 1 z ponizszych opcji\n");
    printf("1)kopiowanie plikow                       2)przenoszenie plikow\n");
    printf("3)usuwanie plikow                              4) koniec\n");
    printf("Podaj numer wybranej opcji\n");

}
int pobierz_wybor()
{
    int odp;
    scanf("%d",&odp);
while(!zle_granice(odp,DOL,GORA))
    {
        while(getchar()!='\n');
        printf("%d nie jest poprawnym wyborem\n",odp);
        menu();
        scanf("%d",&odp);
    }
    return odp;
}
bool zle_granice(int wybor,int a,int b)
{
    bool flaga=true;
    if(wybor<a)
    flaga=false;
    if(wybor>b)
        flaga=false;
    return flaga;

}
