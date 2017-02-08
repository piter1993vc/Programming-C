#include <stdio.h>
#include <stdlib.h>
#define Q "\"Hamlet mial leb jak sklep\""

int main()
{
    printf("Hello world!\n");
     printf("sprzedal obraz za %2.2f zl.\n",2.345e2);
      printf("%c  %c\n",'C',41);
      printf("%s\n sklada sie z %d znakow\n",Q,strlen(Q));
      printf("czy %2.2e to tyle samo co %2.2f\n",1201.0,1201.0);
          return 0;
}
