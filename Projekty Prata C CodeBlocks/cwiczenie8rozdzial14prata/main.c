#include <stdio.h>
#include <stdlib.h>
/*#define SPRAWDZENIE*/
#include <string.h>
#define MAXOSOB 50
#define MAXCHAR 30
#define ENTER putchar('\n')
#define ENTER_wp fprintf(wp,"%c",'\n')
#define SPACE putchar(' ')
#define SPACE_wp  fprintf(wp,"%c",' ')
#define CZYSC while(getchar()!='\n')continue
struct jambojet
{
    int nr_ident;
    int znacznik;
    char imie[MAXCHAR];
    char nazwisko[MAXCHAR];
};
int licznik=0;
char pokaz_menu(void);
void pokaz_liczbe(const struct jambojet *liczba,int n);
void pokaz_liste(const struct jambojet *liczba,int n);
void pokaz_alfabet_rezerw(const struct jambojet *alfabet,int n);
void zarezerwuj(struct jambojet *sprawdzenie,struct jambojet *przypisanie,int n);
void usun_rezerwacje(struct jambojet *sprawdzenie,struct jambojet *przypisanie,int n,int m);
int main()
{
    char wybor,odczyt;
    int i,j;
    FILE *wp;
    struct jambojet miejsca[MAXOSOB];
    struct jambojet temp[MAXOSOB];

    for(i=0; i<MAXOSOB; i++)
    {
        (miejsca[i].nr_ident)=10+i;
        temp[i].znacznik=0;
        miejsca[i].znacznik=0;
#ifdef SPRAWDZENIE
        printf("nr id: %d\n",miejsca[i].nr_ident);
#endif
    }

    /*otwarcie pliku*/
    if((wp=fopen("baza_danych.txt","a+"))==NULL)
    {
        fputs("nie udalo sie otworzyc pliku \"baza_danych.txt\"",stderr);
        exit(1);
    }


    /*odczyt danych z pliku do struktury*/
    rewind(wp);
    i=0;
    while(i<MAXOSOB&&(odczyt=getc(wp))!=EOF)
    {
        if(i==0)
        {
            rewind(wp);
        }
        fscanf(wp,"%d",&temp[i].nr_ident);
        fscanf(wp,"%s",temp[i].imie);
        fscanf(wp,"%s",temp[i].nazwisko);
        temp[i].znacznik=1;
#ifdef SPRAWDZENIE
        printf("temp[%d].znacznik=%d\n",i,temp[i].znacznik);
        printf("temp[%d].nr_ident=%d\n",i,temp[i].nr_ident);
#endif

        i++;
        licznik++;
    }

#ifdef SPRAWDZENIE
    printf("licznik =%d\n",licznik);
#endif
fclose(wp);

    /*przypisanie struktury temp do miejsca wedlug odczytanego id*/

    for(i=0; i<licznik; i++)
    {
        for(j=0; j<MAXOSOB; j++)
        {
            if((miejsca[j].nr_ident)==(temp[i].nr_ident))
            {
                strcpy((miejsca[j].imie),(temp[i].imie));
                strcpy((miejsca[j].nazwisko),(temp[i].nazwisko));
                (miejsca[j].znacznik)=(temp[i].znacznik);
#ifdef SPRAWDZENIE
                printf("miejsca[%d].znacznik=%d\n",j,miejsca[j].znacznik);
#endif
            }
        }
    }
    /*menu glowne*/
    while((wybor=pokaz_menu())!='f')
    {
        switch(wybor)
        {
        case 'a':
            pokaz_liczbe(temp,MAXOSOB);
            break;
        case 'b':
            pokaz_liste(miejsca,MAXOSOB);
            break;
        case 'c':
            pokaz_alfabet_rezerw(temp,licznik);
            break;
        case 'd':
            zarezerwuj(miejsca,temp,MAXOSOB);
            break;
        case 'e':
            usun_rezerwacje(miejsca,temp,MAXOSOB,licznik);
            break;

        }
    }
    /*zaktualnienie bazy danych */
if((wp=fopen("baza_danych.txt","w+"))==NULL)
    {
        fputs("nie udalo sie otworzyc pliku \"baza_danych.txt\"",stderr);
        exit(1);
    }
    rewind(wp);
    for(i=0;i<MAXOSOB;i++)
    {
        if((miejsca[i].znacznik)==1)
        {
            if(i!=0)
            {
              ENTER_wp;
            }
            fprintf(wp,"%d",miejsca[i].nr_ident); SPACE_wp;
            fprintf(wp,"%s",miejsca[i].imie);     SPACE_wp;
            fprintf(wp,"%s",miejsca[i].nazwisko);
        }
    }
    fclose(wp);
    puts("koniec");
    getchar();
    getchar();
    return 0;
}
/*wyswietla menu*/
char pokaz_menu(void)
{
    char zmienna;
    printf("\n Aby wybrac opcje, wpisz jej oznaczenie literowe:\n");
    printf("a) Pokaz liczbe pustych miejsc.\n");
    printf("b) Pokaz liste pustych miejsc.\n");
    printf("c) Pokaz alfabetyczna liste miejsc.\n");
    printf("d) Zarezerwuj miejsce dla klijenta.\n");
    printf("e) Usun rezerwacje miejsca.\n");
    printf("f) Koniec.\n");
    zmienna=getchar();
    while(strchr("abcdef",zmienna)==NULL)
    {
        CZYSC;
        puts("wpisz ponownie:");
        zmienna=getchar();
    }
    CZYSC;
    return zmienna;
}
/*pokazuje liczbe wolnych miejsc*/
void pokaz_liczbe(const struct jambojet *liczba,int n)
{
    int i;
    int licznik=0;
    for(i=0; i<n; i++)
    {
        if((liczba->znacznik)==0)
        {
            licznik++;
        }
        liczba++;
    }
    printf("wolnych miejsc jest %d\n",licznik);
    ENTER;
}
/*pokazuje liste id wolnych miejsc*/
void pokaz_liste(const struct jambojet *liczba,int n)
{
    int i;
    printf("wolne miejsca:\n");
    for(i=0; i<n; i++)
    {
        if((liczba->znacznik)==0)
        {
            printf("nr: %d, id: %d\n",i+1,liczba->nr_ident);
        }
        liczba++;
    }
    ENTER;
}

/*pokazuje alfabetycznie rezerwacje*/
void pokaz_alfabet_rezerw(const struct jambojet *liczba,int n)
{
    int i;
    int flaga=0;
    struct jambojet temp;
    struct jambojet alfabet[MAXOSOB];
    int dol,gora;
    for(i=0; i<n; i++)
    {
        (alfabet[i].nr_ident)=((liczba+i)->nr_ident);
        strcpy((alfabet[i].imie),((liczba+i)->imie));
        strcpy((alfabet[i].nazwisko),((liczba+i)->nazwisko));
        (alfabet[i].znacznik)=((liczba+i)->znacznik);
    }

    for(dol=0; dol<n-1; dol++)
    {
        for(gora=dol+1; gora<n; gora++)
        {
            if(strcmp((alfabet[dol].nazwisko),(alfabet[gora].nazwisko))>0)
            {
                (temp.nr_ident)=(alfabet[dol].nr_ident);
                strcpy((temp.imie),(alfabet[dol].imie));
                strcpy((temp.nazwisko),(alfabet[dol].nazwisko));
                temp.znacznik=alfabet[dol].znacznik;

                (alfabet[dol].nr_ident)=(alfabet[gora].nr_ident);
                strcpy((alfabet[dol].imie),(alfabet[gora].imie));
                strcpy((alfabet[dol].nazwisko),(alfabet[gora].nazwisko));
                alfabet[dol].znacznik=alfabet[gora].znacznik;

                (alfabet[gora].nr_ident)=(temp.nr_ident);
                strcpy((alfabet[gora].imie),(temp.imie));
                strcpy((alfabet[gora].nazwisko),(temp.nazwisko));
                alfabet[gora].znacznik=temp.znacznik;

            }
        }
    }
    printf("rezerwacja w porzadku alfabetycznym:\n");
    for(i=0; i<n; i++)
    {
        if(alfabet[i].znacznik==1)
        {
            flaga=1;
            printf("nr id:%d nazwisko: %s, imie: %s\n",alfabet[i].nr_ident,alfabet[i].nazwisko,alfabet[i].imie);
        }
    }
    if(flaga==0)
    {
        printf("nie ma zadnych rezerwacji do wyswietlenia!\n");
    }
    ENTER;
}

/*rezerwacja */
void zarezerwuj(struct jambojet *sprawdzenie,struct jambojet *przypisanie,int n)
{
    int i;
    int nr_id;
    int flaga=0;
    printf("wolne miejsca:\n");
    for(i=0; i<n; i++)
    {
        if((sprawdzenie[i].znacznik)==0)
        {
            printf("nr: %d, id: %d\n",i+1,sprawdzenie[i].nr_ident);
        }
    }
    printf("podaj nr id ktory chcesz zarezerwowac:\n");
    while((scanf("%d",&nr_id))==1)
    {
        flaga=0;
        CZYSC;
        for(i=0; i<n; i++)
        {
            if((((sprawdzenie+i)->nr_ident)==nr_id)&&((sprawdzenie+i)->znacznik==0))
            {
                puts("podaj swoje imie:");
                gets((sprawdzenie+i)->imie);
                puts("podaj swoje nazwisko:");
                gets((sprawdzenie+i)->nazwisko);
                (sprawdzenie+i)->znacznik=1;
                licznik++;
                flaga=1;
                ((przypisanie+licznik-1)->nr_ident)=(sprawdzenie[i].nr_ident);
                strcpy(((przypisanie+licznik-1)->imie),(sprawdzenie[i].imie));
                strcpy(((przypisanie+licznik-1)->nazwisko),(sprawdzenie[i].nazwisko));
                (przypisanie+licznik-1)->znacznik=1;
                puts("rezerwacja pomyslna!");
            }
        }
        if(flaga==0)
        {
            puts("podales zle id");
        }
        puts("podaj kolejne id lub znak nienumeryczny aby kontynuowac:");
    }
    CZYSC;

    ENTER;
}

/*usuwanie rezerwacji*/
void usun_rezerwacje(struct jambojet *sprawdzenie,struct jambojet *przypisanie,int n,int m)
{
    int nr_id;
    int i;
    int flaga=0;
    printf("zajete miejsca to:\n");

    for(i=0; i<n; i++)
    {
        if(((sprawdzenie+i)->znacznik)==1)
        {
            printf("nr: %d, id: %d\n",i+1,(sprawdzenie+i)->nr_ident);
        }

    }
    printf("podaj swoj nr id:");
    if((scanf("%d",&nr_id))==1)
    {
        for(i=0; i<n; i++)
        {
            if((sprawdzenie+i)->nr_ident==nr_id)
            {
                (sprawdzenie+i)->znacznik=0;
                flaga=1;
            }
        }
        for(i=0; i<m; i++)
        {
            if((przypisanie+i)->nr_ident==nr_id)
            {
                (przypisanie+i)->znacznik=0;
            }
        }
    }
    if(flaga==1)
    {
        printf("Pomyslnie usunieto rezerwacje nr: %d\n",nr_id);
    }
    else
        printf("podales zle id!");

    CZYSC;
    ENTER;
}





