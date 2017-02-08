#include <stdio.h>
int main()
{
static int max=100;
int licznik;
licznik=max+1;
while(--licznik>0)
{
  printf("%d butelek piwa na stole, "
         "%d butelek piwa!\n",licznik,licznik);
        printf("wez butelke w obroty\n");
        printf("%d butelek zostalo!\n",licznik-1);        
}
    return 0;
}