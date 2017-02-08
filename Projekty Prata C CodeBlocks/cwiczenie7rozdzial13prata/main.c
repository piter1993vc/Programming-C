#include <stdio.h>
#include <stdlib.h>
#define BUFOR 1024
#define WIERSZE 100


int main(int argc,char *argv[])
{
    FILE *w1,*w2;
char bufor_1[WIERSZE][BUFOR];
char bufor_2[WIERSZE][BUFOR];

    int i=0;
    if(argc<3)
    {
        fprintf(stderr,"podano za malo argumentow wiersza polecen\n");
        exit(1);

    }
    if((w1=fopen(argv[1],"r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s lub tez nie istnieje\n",argv[1]);
        exit(2);
    }
     if((w2=fopen(argv[2],"r"))==NULL)
    {
        fprintf(stderr,"nie udalo sie otworzyc pliku %s lub tez nie istnieje\n",argv[2]);
        exit(2);
    }

while(i<WIERSZE&&fgets(bufor_1[i],BUFOR,w1)!=NULL&&fgets(bufor_2[i],BUFOR,w2)!=NULL)
      {
          if(bufor_1[i][0]=='\0'&&bufor_2[i][0]=='\0')
            {
            goto skok;
            }

            fputs(bufor_1[i],stdout);
            putchar('\n');
            fputs(bufor_2[i],stdout);
            i++;
                 putchar('\n');

      }
    fclose(w1);
    fclose(w2);
    skok:
        puts("koniec");
getchar(); getchar();
    return 0;
}
