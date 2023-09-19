#include <stdio.h>

int main()
{
    unsigned int tmin, tmoy = 0, tmax,  nb = 0, current;

    scanf("%u", &current);
    tmax = current;
    tmin = current;

    while (current)
    {
        if(current > tmax) tmax = current;
        else if (current < tmin) tmin = current;
        nb++;
        tmoy+=current;
        scanf("%u", &current);
        
    }

    printf("taille min : %u, taille max : %u, taille moyen : %u\n", tmin, tmax, tmoy/nb);

    return 0;
    
}