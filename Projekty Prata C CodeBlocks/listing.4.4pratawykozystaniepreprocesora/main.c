#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

int main(void)
{
    float powierzchnia,obwod,promien;
    printf("Ile wynosi promien twojej pizzy?\n");
    scanf("%f",&promien);
    powierzchnia=PI*promien*promien;
    obwod=2.0*PI*promien;
    printf("podstawowe parametry twojej pizzy to:\n");
    printf("obwod=%1.2f,powierzchnia=%1.2f\n",obwod,powierzchnia);
    return 0;
}
