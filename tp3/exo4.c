#include <stdio.h>
#include <string.h>

enum { LONGUEUR_MAX = 30, NB_ETUDIANTS_MAX = 20 };

typedef struct
{
    char nom[LONGUEUR_MAX];
    unsigned int taille; //en cm
} Etudiant;


int main() 
{
    Etudiant etudiants[NB_ETUDIANTS_MAX];
    int i = 0;
    for (; i < NB_ETUDIANTS_MAX; i++)
    {
        char tempString[LONGUEUR_MAX];
        printf("Nom de l'étudiant : ");
        scanf("%s", tempString);

        printf("taille de l'étudiant (en cm) : ");
        unsigned int temp;
        scanf("%u", &temp);
        if(temp)
        { 
            int j = i;
            while (j > 0 && temp < etudiants[j - 1].taille)
            {
                strcpy(etudiants[j].nom, etudiants[j - 1].nom);
                etudiants[j].taille = etudiants[j - 1].taille;
                j--;
            }

            strcpy(etudiants[j].nom, tempString);
            etudiants[j].taille = temp;
            
        }
        else i += NB_ETUDIANTS_MAX;
    }
    
    for (int a = 0; a < i - NB_ETUDIANTS_MAX - 1; a++)
    {
        printf("etudiant : %s de taille %u cm\n", etudiants[a].nom, etudiants[a].taille);
    }
    
    return 0;
}