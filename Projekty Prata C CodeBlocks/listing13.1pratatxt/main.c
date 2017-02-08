#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int licznik=0;
    FILE *wp;
    int ch;


    wp=fopen("gowno.txt","r");

    if(wp==NULL)
       {
           perror("gowno.txt");
           exit(1);
       }
       while((ch=getc(wp))!=EOF)
        {
            putc(ch,stdout);
            licznik++;
        }

    printf("plik %s posiada %ld znakow\n","gowno.txt",licznik);
    fclose(wp);
    getchar(); getchar();
    return 0;
}
