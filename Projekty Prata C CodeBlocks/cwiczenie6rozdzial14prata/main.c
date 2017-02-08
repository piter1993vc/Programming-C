#include <stdio.h>
#include <stdlib.h>
#define SPACE putc(ch,wp)
#define CZYSC while(getchar()!='\n')continue
#define ENTER_W_PLIKU  fprintf(wp,"%c",'\n')
#define MAXOSOB 100 /*limit liczby pilkarzy*/
struct pilkarze /*struktura o etykiecie pilkarze*/
{
    int numer;
    char imie[20];
    char nazwisko[20];
    int rzuty;
    int rzuty_trafione;
    int asysty;
    int faule;
    float skutecznosc;
};
int main()
{
    FILE *wp;
    int zatwierdzone=0;/*ilosc poprawnie przypisanych pilkarzy*/
    int i=0;
    int stan; /*zmienna pomocnicza do scanf*/
    int flaga=1;/*flaga do zmiany indeksu struktury z_pliku*/
    int ile=0; /*licznik ilosci odczytanych pilkarzy z pliku[1]*/
    char plik[2][100]; /*2 nazwy pliku binarna i tekstowa*/
    size_t rozmiar=sizeof(struct pilkarze);
    struct pilkarze do_pliku[MAXOSOB];/*tablica struktur danych pilkarzy*/
    struct pilkarze z_pliku[MAXOSOB]; /*tablica struktur do odczytu z pliku*/
    char ch=' ';
    char znaki; /*zmienna pomocnicza do odczytywania danych z pliku*/
    printf("Podaj imie pilkarza nr %d lub [enter] aby zakonczyc:\n",i+1);
    while(gets(do_pliku[i].imie)!=NULL&&do_pliku[i].imie[0]!='\0') /*wczytanie imienia do struktury*/
    {
        do_pliku[i].numer=i+1;/*numer pilkarza*/
        puts("Podaj nazwisko pilkarza:");
        gets(do_pliku[i].nazwisko);
        printf("Podaj liczbe rzutow:\n");
        while((stan=scanf("%d",&do_pliku[i].rzuty))!=1||(do_pliku[i].rzuty==0)||(do_pliku[i].rzuty<0))
        {
            CZYSC; /*alias patrz #define*/
            if(do_pliku[i].rzuty==0&&stan)
            {
                printf("nie mozliwe ze nic nie zucil popraw sie:\n");
            }
            else if((do_pliku[i].rzuty)<0&&stan)
            {
                printf("Nie da sie rzucic ujemna ilosc razy popraw sie:\n");
            }
            else
            {
                printf("zle wpisales popraw liczbe rzutow:\n");
            }
        }
        printf("Podaj liczbe rzutow trafionych:\n");
        while((stan=scanf("%d",&do_pliku[i].rzuty_trafione))!=1||(do_pliku[i].rzuty)<(do_pliku[i].rzuty_trafione)||(do_pliku[i].rzuty_trafione)<0)
        {
            CZYSC;
            if(do_pliku[i].rzuty<do_pliku[i].rzuty_trafione&&stan)
            {
                printf("nie mozliwe ze wiecej trafil niz rzucil popraw wpis:\n");
            }
            else if(do_pliku[i].rzuty_trafione<0&&stan)
            {
                printf("nie mozna trafic mniej niz 0 razy popraw sie:\n");
            }

            else
            {
                printf("zle wpisales popraw liczbe rzutow trafionych:\n");
            }
        }
        printf("Podaj liczbe asyst:\n");
        while((stan=scanf("%d",&do_pliku[i].asysty))!=1||(do_pliku[i].asysty)<0)
        {
            CZYSC;
            if((do_pliku[i].asysty)<0&&stan)
            {
                printf("nie mozna asystowac mniej niz 0 razy popraw wpis:\n");
            }
            else
            {
                printf("zle wpisales popraw liczbe asyst:\n");
            }
        }
        printf("Podaj liczbe fauli:\n");
        while((stan=scanf("%d",&do_pliku[i].faule))!=1||(do_pliku[i].faule)<0)
        {
            CZYSC;
            if((do_pliku[i].faule)<0&&stan)
            {
                printf("nie mozna sfaulowac mniej niz 0 razy popraw wpis:\n");
            }
            else
            {
                printf("zle wpisales popraw liczbe fauli:\n");
            }
        }
        CZYSC;
        i++;
        zatwierdzone++;
        printf("Podaj imie kolejnego pilkarza nr %d lub [enter] aby zakonczyc:\n",i+1);
    }
    puts("Podaj nazwe pliku binarnego do utworzenia moze byc z swiezka do dysku,brak siezki to katalog docelowy:");
    gets(plik[0]);
    /*zapis do pliku binarnego*/
    if((wp=fopen(plik[0],"a+b"))==NULL)
    {
        fprintf(stderr,"Nie udalo sie utworzyc pliku %s\n",plik[0]);
        goto skok;
    }
    fwrite(do_pliku,rozmiar,zatwierdzone,wp);
    fclose(wp);
    /*zapis do pliku tekstowego*/
skok:
    puts("Podaj nazwe pliku tekstowego do utworzenia moze byc z swiezka do dysku,brak siezki to katalog docelowy:");
    gets(plik[1]);
    if((wp=fopen(plik[1],"a"))==NULL)
    {
        fprintf(stderr,"Nie udalo sie utworzyc pliku %s\n",plik[1]);
        exit(1);
    }

    /*petla do zapisania do pliku*/
    for(i=0; i<zatwierdzone; i++)
    {
        fprintf(wp,"%d",do_pliku[i].numer);
        SPACE; /*alias patrz #define*/
        fprintf(wp,"%s",do_pliku[i].imie);
        SPACE;
        fprintf(wp,"%s",do_pliku[i].nazwisko);
        SPACE;
        fprintf(wp,"%d",do_pliku[i].rzuty);
        SPACE;
        fprintf(wp,"%d",do_pliku[i].rzuty_trafione);
        SPACE;
        fprintf(wp,"%d",do_pliku[i].asysty);
        SPACE;
        fprintf(wp,"%d",do_pliku[i].faule);
        SPACE;
        ENTER_W_PLIKU;
    }
    fclose(wp);
    /*wczytanie danych z pliku do struktury pomocniczej*/
    if((wp=fopen(plik[1],"r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s\n",plik[1]);
        exit(2);
    }
    for(i=0; i<MAXOSOB; i++,flaga=1)
    {
        while((znaki=getc(wp))!=EOF&&flaga==1)
        {
            if(i==0)
            {
                rewind(wp);
            }
            fscanf(wp,"%d",&z_pliku[i].numer);
            fscanf(wp,"%s",z_pliku[i].imie);
            fscanf(wp,"%s",z_pliku[i].nazwisko);
            fscanf(wp,"%d",&z_pliku[i].rzuty);
            fscanf(wp,"%d",&z_pliku[i].rzuty_trafione);
            fscanf(wp,"%d",&z_pliku[i].asysty);
            fscanf(wp,"%d",&z_pliku[i].faule);
            flaga=0;
            ile++;
       }
    }
    /*wyswietlenie struktury z_pliku*/
    for(i=0; i<ile-1; i++)
    {
        printf("%d imie: %s, nazwisko: %s, rzuty: %d, rzuty trafione :%d, asysty: %d, faule: %d\n",z_pliku[i].numer,z_pliku[i].imie,z_pliku[i].nazwisko,z_pliku[i].rzuty,z_pliku[i].rzuty_trafione,
               z_pliku[i].asysty,z_pliku[i].faule);
    }
    fclose(wp);
    for(i=0; i<ile-1; i++)
    {
        z_pliku[i].skutecznosc=((z_pliku[i].rzuty_trafione)/(z_pliku[i].rzuty));
    }
    for(i=0; i<ile-1; i++)
    {
        printf("imie: %s, nazwisko: %s skutecznosc: %.2f\n",z_pliku[i].imie,z_pliku[i].nazwisko,z_pliku[i].skutecznosc);
    }
    puts("koniec");
    return 0;
}
