#include <stdio.h>
#include <assert.h>

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

    for(int b = 0; b < TAILLE/2; b++)
    {
        int temp = mirrorTableau[b];
        mirrorTableau[b] = mirrorTableau[TAILLE-1-b];
        mirrorTableau[TAILLE-1-b] = temp;
    }

   
     for (int k = 0; i < TAILLE; k++) {
        assert(tableau[k] == mirrorTableau[k]);
    }
    
    return 0;
}