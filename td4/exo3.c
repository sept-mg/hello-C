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
    
    else {
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
    int dividende, diviseur;
    printf("Entrez le dividende : ");
    scanf("%d", &dividende);
    printf("Entrez le diviseur : ");
    scanf("%d", &diviseur);

    int resultat = divisionEntiere(dividende, diviseur);
    printf("Le quotient de %d / %d est : %d\n", dividende, diviseur, resultat);

    return 0;
}