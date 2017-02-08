#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int dimx=800;
    const int dimy=800;
    int i,j;
    int x;
    FILE*wp=fopen("first.ppm","wb");
    fprintf(wp,"P6\n%d %d\n255\n",dimx,dimy);
    for(j=0;j<dimy;j++)
    {
        for(i=0;i<dimx;i++)
        {
            static unsigned char color[3];
            color[0]=i%255;
            color[1]=j%255;
            color[2]=(i*j)%255;
            x=fwrite(color,1,3,wp);
        }
    }
    fclose(wp);
    printf("liczba zapisanych elementow tablicy %d\n",x);
    return 0;
}
