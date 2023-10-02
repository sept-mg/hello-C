#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int divisionEntiere(int dividende, int diviseur)
{
    assert(diviseur != 0);

    int quotient = 0;
    int signe = 1;

    if ((dividende < 0 && diviseur > 0) || (dividende > 0 && diviseur < 0))
    {
        signe = -1;
    }
    
    else
    {
        signe = 1;
    }

    dividende = abs(dividende);
    diviseur = abs(diviseur);
    
    while (dividende >= diviseur)
    {
        dividende -= diviseur;
        quotient++;
    }

    return signe * quotient;
}


int main()
{
    assert(divisionEntiere(10, 3) == 3);
    assert(divisionEntiere(-10, 3) == -3);
    assert(divisionEntiere(10, -3) == -3);
    assert(divisionEntiere(-10, -3) == 3);


    printf("Tous les tests ont réussi.\n");

    return 0;
}