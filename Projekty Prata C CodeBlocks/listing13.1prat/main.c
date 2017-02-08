#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    long int licznik=0;
    FILE *wp;
    int ch;

    if(argc!=2)
    {
        printf("sposob uzycia %s nazwa pliku\n",argv[0]);
        exit(1);
    }
    wp=fopen(argv[1],"r");

    if(wp==NULL)
       {
           perror("argv[1]");
           exit(1);
       }
       while((ch=getc(wp))!=EOF)
        {
            putc(ch,stdout);
            licznik++;
        }

    printf("plik %s posiada %ld znakow\n",argv[1],licznik);
    fclose(wp);
    getchar(); getchar();
    return 0;
}
