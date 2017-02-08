#include <stdio.h>
#include <stdlib.h>
#define DEF "jestem zdefiniowanym lancuchem"
int main()
{
    char lan1[80]="przypisano mnie do tablicy";
    char *lan2="przypisano mnie do wskaznika";
    puts("jestem argumentem funkcji puts()");
    puts(DEF);
    puts(lan1);
    puts(lan2);
    puts(&lan1[4]);
    puts(lan2+4);

    return 0;
}
