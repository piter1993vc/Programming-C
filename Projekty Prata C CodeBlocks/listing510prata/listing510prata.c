#include <stdio.h>
int main()
{
    int ultra=0,super=0;
    while(super<6)
    {
        super++;
        ++ultra;
        printf("ultra=%d, super=%d\n",super,ultra);
    }
    
    return 0;
}