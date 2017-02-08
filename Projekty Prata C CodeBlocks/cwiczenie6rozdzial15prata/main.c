#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*wyrownania*/
#define WYR_L 0
#define WYR_S 1
#define WYR_P 2
/*wytluszczenia*/
#define WYTL_WYL 0
#define WYTL_WL 1
/*podkreslenia*/
#define PODKR_WYL 0
#define PODKR_WL 1
/*define kursywa*/
#define KUR_WYL 0
#define KUR_WL 1
#define CZYSC while(getchar()!='\n')continue
struct pola
{
    unsigned int typ :8;
    unsigned int rozmiar :7;
    unsigned int wyrownanie :2;
    unsigned int wytluszczenie :1;
    unsigned int kursywa :1;
    unsigned int podkreslenie :1;
};
typedef struct pola SETTINGS;
void typ(SETTINGS *wsk);
void rozmiar(SETTINGS *wsk);
void wyrownanie(SETTINGS *wsk);
void wytluszczenie(SETTINGS *wsk);
void kursywa(SETTINGS *wsk);
void podkreslenie(SETTINGS *wsk);
char *wyrown(unsigned int w);
char wybierz_menu(SETTINGS *wsk);


int main()
{
    char wybor;
    SETTINGS set= {1,12,WYR_L,WYTL_WYL,KUR_WYL,PODKR_WYL};
    while((wybor=wybierz_menu(&set))!='k')
    {
        switch(wybor)
        {
        case 't':
            typ(&set);
            break;
        case 'r':
            rozmiar(&set);
            break;
        case 'w':
            wyrownanie(&set);
            break;
        case 'b':
            wytluszczenie(&set);
            break;
        case 'i':
            kursywa(&set);
            break;
        case 'u':
            podkreslenie(&set);
            break;

        }
    }
    puts("koniec");
    return 0;
}

void typ(SETTINGS *wsk)
{
    int n;
    printf("wybierz typ czcionki od 0 do 255:\n");
    while((scanf("%d",&n))!=1||(n)<0||(n)>255)
    {
        CZYSC;
        printf("popraw sie:\n");
    }
    wsk->typ=n;


}
void rozmiar(SETTINGS *wsk)
{
        int n;
    printf("wybierz rozmiar czcionki od 0 do 127:\n");
    while((scanf("%d",&n))!=1||(n)<0||(n)>127)
    {
        CZYSC;
        printf("popraw sie:\n");
    }
    wsk->rozmiar=n;


}
void wyrownanie(SETTINGS *wsk)
{
    char ch;
    printf("wybierz wyrownanie:\n");
    printf(" l)lewo   s)srodek   p)prawo\n");
    ch=getchar();
    while((strchr("lsp",ch))==NULL)
    {
        CZYSC;
        puts("popraw sie:");
        puts(" l)lewo   s)srodek   p)prawo");
        ch=getchar();
    }
    if(ch=='l') wsk->wyrownanie=WYR_L;
        else if(ch=='s') wsk->wyrownanie=WYR_S;
        else  wsk->wyrownanie=WYR_P;


}
void wytluszczenie(SETTINGS *wsk)
{
     int n;
    printf("wybierz wytluszczenie 0-wyl 1-wl:\n");
    while((scanf("%d",&n))!=1||(n!=0&&n!=1))
    {
        CZYSC;
        printf("popraw sie:\n");
    }
    wsk->wytluszczenie=n;


}
void kursywa(SETTINGS *wsk)
{
      int n;
    printf("wybierz kursywe 0-wyl 1-wl:\n");
    while((scanf("%d",&n))!=1||(n!=0&&n!=1))
    {
        CZYSC;
        printf("popraw sie:\n");
    }
    wsk->kursywa=n;


}
void podkreslenie(SETTINGS *wsk)
{
      int n;
    printf("wybierz podkreslenie 0-wyl 1-wl:\n");
    while((scanf("%d",&n))!=1||(n!=0&&n!=1))
    {
        CZYSC;
        printf("popraw sie:\n");
    }
    wsk->podkreslenie=n;


}
char *wyrown(unsigned int w)
{
    if(w==0)
        return "lewo";
        else if(w==1)
        return "srodek";
        else return "prawo";

}

char wybierz_menu(SETTINGS *wsk)
{

    char wybor;
    printf("    TYP    ROZMIAR    WYROWNANIE      WYTL     KUR      PODKR\n");
    printf("      %d         %d         %s        %s     %s        %s \n",wsk->typ,wsk->rozmiar,wyrown(wsk->wyrownanie),
           wsk->wytluszczenie==0?"wyl":"wl",wsk->kursywa==0?"wyl":"wl",wsk->podkreslenie==0?"wyl":"wl");
    printf("t)zmiana typu                r)zmiana rozmiaru         w) zmiana wyrownania\n");
    printf("b)zmiana wytluszczenia       i)zmiana kursywy          u) zmiana podkreslenia\n");
    printf("k)koniec:");
    wybor=getchar();
    while((strchr("trwbiuk",wybor))==NULL)
    {
        printf("popraw sie:");
        wybor=getchar();
   }
   CZYSC;
return wybor;

}


