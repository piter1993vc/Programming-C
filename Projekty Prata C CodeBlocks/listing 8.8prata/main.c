#include <stdio.h>
#include <stdlib.h>
int pobierz_wybor(void);
void liczenie(void);
int pierwszy(void);


int main()
{
    int wybor;
    while((wybor=pobierz_wybor())!='q')
    {
        switch(wybor)
        {
            case 'a': printf("Mow albo zamilknij na wieki\n"); break;
            case 'b': putchar('\a'); break;
            case 'c': liczenie(); break;
            default: printf("blad programu\n"); break;
        }
    }
    printf("Good Night Good Luck\n");
    return 0;
}
int pobierz_wybor(void)
{
    int ch;
    printf("wybierz jedna z ponizszych opcji\n");
    printf("a.dobra rada               b.alarmo\n");
    printf("c.liczenie                    q.koniec programu\n");
    ch=pierwszy();
    while((ch<'a'||ch>'c')&&ch!='q')
    {
        printf("wpisz a b c lub q\n");
        ch=pierwszy();
    }
    return ch;
}

int pierwszy(void)
{
    int ch;
    ch=getchar();
    while(getchar()!='\n')
        continue;
        return ch;

}
void liczenie(void)
{
    int liczba;
    int i;
    printf("napisz do ilu mam liczyc\n");
    if((scanf("%d",&liczba))!=1)
    {


        printf("zle wpisales wpisze teraz liczbe jako 5\n");
    liczba=5;
    }
    for(i=1;i<=liczba;i++)
        printf("%d\n",i);
        while(getchar()!='\n')
            continue;
}
