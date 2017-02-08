#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct filmy
{
    char tytul[30];
    int ocena;
};
int main()
{
    struct filmy wo[MAX];
    int i=0;
    int j;
  puts("podaj tytul filmu:");
  while(i<MAX&&(gets(wo[i].tytul)!=NULL)&&wo[i].tytul[0]!='\0')
  {
      puts("podaj ocene od 1 do 10");
      while((scanf("%d",&wo[i].ocena))!=1||(wo[i].ocena<1)||(wo[i].ocena>10))
      {
          while(getchar()!='\n')
            continue;
          printf("popraw sie:\n");
      }
      i++;
      while(getchar()!='\n')
        continue;
      puts("podaj kolejny tytul ksiazki lub [enter] aby zakonczyc:");

  }
  if(i==0)
    printf("nie podano nic\n");
  else
  {
         printf("wpisane wartosci:\n");
         for(j=0;j<i;j++)
         {
             printf("tytul; : %s, ocena: %d\n",wo[j].tytul,wo[j].ocena);
         }
  }

    return 0;
}
