#include <stdio.h>

int main() 
{
    enum {TAILLE = 3};

    int tableau[TAILLE] = {1,2,3};
    int mirrorTableau[TAILLE];

    int i = 0;
    for(int j = TAILLE-1; j >= 0; j--)
    {
        mirrorTableau[i] = tableau[j];
        i++;
    }

    for(int a = 0; a < TAILLE; a++)
    {
        printf("%d\n", mirrorTableau[a]);
    }
    
    
    return 0;
}