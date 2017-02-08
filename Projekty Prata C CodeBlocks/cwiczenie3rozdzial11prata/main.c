#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 80
#define ZNAKI 21


int main()
{

    int i;
    char wierszyk[MAX];

    printf("wprowadz max %d znakow:\n",MAX);
fgets(wierszyk,ZNAKI,stdin);

for(i=0;i<MAX;i++)
{
    if(wierszyk[i]=='\t'||wierszyk[i]==' '||wierszyk[i]=='\n')
       wierszyk[i]='\0';


}
puts(wierszyk);
    return 0;
}
