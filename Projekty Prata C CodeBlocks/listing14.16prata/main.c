#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char pokazmenu(void);
void usunwiersz(void);
void pokaz(void(*fp)(char*),char *str);
void DuzeLit(char*);
void MaleLit(char*);
void Odwroc(char*);
void Atrapa(char*);

int main()
{
    char wiersz[81];
    char kopia[81];
    char wybor;
    void(*wfun)(char*);
    puts("podaj lancuch lub pusty wiersz konczy program:");
    while(gets(wiersz)!=NULL&&wiersz[0]!='\0')
    {
        while((wybor=pokazmenu())!='n')
        {

            switch(wybor)
            {
            case 'd':
                wfun=DuzeLit;
                break;
            case 'm':
                wfun=MaleLit;
                break;
            case 'o':
                wfun=Odwroc;
                break;
            case 'b':
                wfun=Atrapa;
                break;

            }
            strcpy(kopia,wiersz);
            pokaz(wfun,kopia);
        }
        puts("podaj lancuch lub pusty wiersz konczy program:");
    }
    printf("czesc\n");
    return 0;
}
char pokazmenu(void)
{
    char odp;
    puts("wybierz jedna opcje:");
    puts("d)duze litery                  m)male litery");
    puts("o)odwrocenie liter             b)bez zmian");
    puts("n)nastepny lancuch");
    odp=getchar();
    odp=tolower(odp);
    usunwiersz();
    while(strchr("dmosbn",odp)==NULL)
    {
        puts("wpisz d,m,o,b lub n");
        odp=getchar();
        odp=tolower(odp);
        usunwiersz();
    }
    return odp;
}
void usunwiersz(void)
{
    while(getchar()!='\n')
        continue;
}
void DuzeLit(char*lan)
{
    printf("d");
    while(*lan!='\0')
    {
        *lan=toupper(*lan);
        lan++;
    }

}
void MaleLit(char*lan)
{
    while(*lan!='\0')
    {
        *lan=tolower(*lan);
        lan++;
    }


}
void Odwroc(char*lan)
{
    while(*lan!='\0')
    {
        if(islower(*lan))
            *lan=toupper(*lan);
        else if(isupper(*lan))
            *lan=tolower(*lan);
        lan++;

    }


}
void Atrapa(char*lan)
{
    printf("nic nie zmienia");
}
void pokaz(void(*fp)(char*),char *str)
{

    (*fp)(str);

    puts(str);
}

