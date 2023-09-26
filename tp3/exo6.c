#include <stdio.h>
#include <string.h>

enum { LONGUEUR_MAX = 50 };

int main() 
{
    char chaine[LONGUEUR_MAX]; // Déclarer une chaîne de caractères de longueur maximale de 99 caractères (plus le caractère nul).

    printf("Entrez une chaîne de caractères : ");
    scanf("%s", chaine);

    printf("La chaîne saisie : '%s'\n", chaine);
    printf("Longueur de la chaîne : %zu\n", strlen(chaine));
    printf("Taille mémoire de la chaîne : %zu octets\n", sizeof(chaine));

    return 0;
}
