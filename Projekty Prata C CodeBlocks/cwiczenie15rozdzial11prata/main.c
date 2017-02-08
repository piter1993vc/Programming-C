#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

int main(int argc,char*argv[])
{
    int i;
    char tablica[MAX];
    char temp[MAX];
    printf("podaj lancuch :\n");
    gets(tablica);
    puts("wprowadzone dane to:");
    puts(tablica);
    puts(argv[0]);
    puts(argv[1]);
    puts(argv[2]);
for(i=0;i<strlen(argv[1]);i++)
{
    temp[i]=argv[1][i];
}
puts("temp ma postac:");
puts(temp);

    if(!strcmp(temp,"-p"))
    {
        puts(tablica);
    }


    if(!strcmp(temp,"-u"))
    {
        for(i=0;i<strlen(tablica);i++)
        {
                tablica[i]=toupper(tablica[i]);
        }
        puts(tablica);
    }


    if(!strcmp(temp,"-l"))
    {
          for(i=0;i<strlen(tablica);i++)
          {
                    tablica[i]=tolower(tablica[i]);
          }
            puts(tablica);
    }

    return 0;
    getchar(); getchar();
}
