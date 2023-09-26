#include <stdio.h>
#include <string.h>

enum { LONGUEUR_MAX = 100 };

int main()
{
    char chaine[LONGUEUR_MAX];
    printf("Entrez une chaine de caractere : ");
    scanf("%s", chaine);
    int magique = 0;

    for (int i = 0; i < strlen(chaine); i++) 
    {
        magique += chaine[i] - 64;
    }

    while (magique >= 10) 
    {
        int nouveauMagique = 0;
        while (magique > 0) 
        {
            nouveauMagique += magique % 10;
            magique /= 10;
        }
        magique = nouveauMagique;
    }
    
    printf("le chiffre magique est : %d\n", magique);
    return 0;
}
