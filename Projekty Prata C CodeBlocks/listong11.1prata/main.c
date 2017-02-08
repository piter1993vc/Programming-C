#include <stdio.h>
#include <stdlib.h>
#define WIAD "Musisz miec wiele talentow. Opowiedz mi o nich."
#define GRANICA 5
#define DL_WIER 81
char t1[]="Pamietaj, ze musisz sie zmiescic w jednym wierszu.";
char *t2="Jezeli nic ci nie przychodzi do glowy,mozesz klamac.";

int main()
{
    char imie[DL_WIER];
    char talenty[DL_WIER];
    int i;
    char *t3="\n Ale nie mowmy juz o mnie. Jak masz na imie?";
    char *mojetal[GRANICA]={"Blyskawiczne dodawanie liczb", "Precyzyjne mnozenie", "Gromadzenie danych",
    "Scisle wykonywanie instrukcji", "Rozumienie jezyka C" };
    printf("czesc jestem Roman.Komputer.Mam wiecej talentow.\n");
    printf("opowiem ci o nich.\n");
    puts("jak to bylo? A tak. Oto kilka z nich:");
    for(i=0;i<GRANICA;i++)
    {
        puts(mojetal[i]);
    }
    puts(t3);
    gets(imie);
    printf("Hmm %s\n %s\n",imie,WIAD);
    printf("%s\n %s\n",t1,t2);
    gets(talenty);
    puts("sprawdzmy czy zapamietalem");
    puts(talenty);
    printf("dzieki za informacje %s\n",imie);
    printf("Hello world!\n");
    return 0;
}
