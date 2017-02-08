#include <stdio.h>
#include <stdlib.h>
int pobierz_wybor(void);
void liczenie(void);
int pobierz_int(void);
int pobierz_pierwszy(void);

int main()
{
   int wybor;
   while((wybor=pobierz_wybor())!='q')
   {
       switch(wybor)
       {
           case 'a': printf("\a"); break;
           case 'b': printf("kup tanio sprzedaj drozej\n"); break;
           case 'c': liczenie(); break;
           default: printf("blad programu\n"); break;
       }
   }
    return 0;
}
int pobierz_wybor(void)
{
    int ch;
    printf("wybierz opcje z ponizszych proponowanych\n");
    printf("a) alarm                         b) dobra rada\n");
    printf("c) liczenie                      q) koniec\n");
    ch=pobierz_pierwszy();
    while((ch<'a'||ch>'c')&&ch!='q')
    {
       printf("zly wybor podaj jeszcze raz\n");
    ch=pobierz_pierwszy();

    }
     return ch;

}
int pobierz_pierwszy(void)
{
    int ch;

    ch=getchar();

    while(getchar()!='\n')
        continue;
        return ch;
}
void liczenie(void)
{
    int n,i;
    printf("do ilu mam liczyc podaj liczbe cakowita\n");
    n=pobierz_int();
    for(i=1;i<=n;i++)
        printf("%d\n",i);
    while((getchar())!='\n')
    continue;
}
int pobierz_int(void)
{
    int we;
    char ch;
    while((scanf("%d",&we))!=1)
    {
        while(ch=getchar()!='\n')
            putchar(ch);
        printf("podales zla dana wejsciowa popraw sie\n");
        printf("podaj dane typu 25 30 -12 :\n");
    }
    return we;
}
