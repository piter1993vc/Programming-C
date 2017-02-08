#include <stdio.h>
#include <stdlib.h>

int main()
{
    char slowo[40];
    int dl_null;
    int dl;
      int dekrementator;


    printf("podaj slowo: \n");
    scanf("%s",slowo);
    dl_null=strlen(slowo);
    dl=dl_null-1;

    for(dekrementator=dl_null-1;dekrementator>=0;dekrementator--)
        printf("%c",slowo[dekrementator]);
printf("\n no pain no gain");

    return 0;
}
