#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{

    FILE *wp;
    fpos_t dlugosc; /*przechowuje dlugosc pliku*/
    if((wp=fopen("gowno.txt","r"))==NULL) /*proba otwarcia pliku do odczytu*/
    {
        perror("gowno.txt");
        exit(1);
    }

    fseek(wp,0L,SEEK_END);
    fgetpos(wp,&dlugosc);
    printf("rozmiar pliku to %d\n",dlugosc);
    if(fclose(wp)!=0)
    {
        fprintf(stdout,"nie udalo sie zamknac pliku\n");
        exit(2);
    }
    fprintf(stdout,"koniec\n");
    return 0;
}
