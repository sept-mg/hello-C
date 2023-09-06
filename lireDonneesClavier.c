#include <stdio.h>

/*
    ageUtilisateur -> contenu de la variable
    &ageUtilisateur -> adresse de la variable (donc pour re-affecter une valeur à une variable)
*/


int main(void)
{
    int ageUtilisateur = 0;
    printf("Entrez votre age : ");
    scanf("%d", &ageUtilisateur);

    printf("Vous avez %d ans\n", ageUtilisateur);
    return 0;
}