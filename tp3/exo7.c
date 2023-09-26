#include <stdio.h>
#include <string.h>

enum { LONGUEUR_MAX = 100, DECAL = 2};

int main()
{
    char chaine[LONGUEUR_MAX];
    printf("Entrez une chaine de caractere : ");
    scanf("%s", chaine);
    for (int i = 0; i < strlen(chaine); i++)
    {
        chaine[i] = ((chaine[i] + DECAL - 65) % 26) + 65;
    }
    
    printf("%s\n", chaine);

    return 0;
}