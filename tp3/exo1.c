#include <stdio.h>

int main() 
{
    enum {TAILLE = 3};

    int tableau[TAILLE] = {1,2,3};

    for(unsigned int i = 0; i < TAILLE; i++)
    {
        printf("%d\n", tableau[i]);
    }
    
    return 0;
}