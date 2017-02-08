#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int licznik(FILE *plik,char znak);
int main(int argc,char * argv[])
{

    char plik[MAX];
    char ch;
    FILE *wp;
    int i;

    if(argc<2)
    {
        fprintf(stderr,"nie podano szukanego znaku w konsoli\n");
        puts("podaj znak do znalezienia:");
        ch=getchar();
    }

    if(argc>=2)
    {
        ch=argv[1][0];
    }


        if(argc<3)
        {

            puts("podaj nazwe pliku do otwarcia lub [enter] aby zakonczyc:\n");
            while(gets(plik)&&plik[0]!='\0')
                {
                if((wp=fopen(plik,"r"))==NULL)
                    {
                    fprintf(stderr,"nie udalo sie otworzyc pliku %s lub nie istnieje\n",plik);
                    goto skok;
                    }
                printf("w pliku %s znaleziono %d razy znak %c\n",plik,licznik(wp,ch),ch);
                fclose(wp);
                skok:
                puts("podaj kolejny plik do otwarcia lub [enter] aby zakonczyc:\n");
            }
        }




            else
            {
                for(i=2;i<argc;i++)
                    {
                        if((wp=fopen(argv[i],"r"))==NULL)
                        {
                            fprintf(stderr,"blad otwarcia pliku %s lub tez nie istnieje\n",argv[i]);
                            wp=NULL;
                        }
                        if(wp!=NULL)
                        {
                            printf("w pliku %s znaleziono %d razy znak %c\n",argv[i],licznik(wp,ch),ch);
                            fclose(wp);
                        }

                    }
            }



    puts("Koniec \"Good Luck and Good Night\" --)) Dying Light");

    return 0;
}
int licznik(FILE*plik,char znak)
{
    int ile=0;
    char ch;
      while(ch=getch(plik)!=EOF)
    {
           if(ch==znak)
           {
                ile++;
           }

    }
    return ile;
}
