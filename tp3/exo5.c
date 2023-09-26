#include <stdio.h>
#include <string.h>
#include <math.h>

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

    int maxIndex = i - NB_ETUDIANTS_MAX - 1;
    
    unsigned int sommeTailles = 0;
    for (int a = 0; a < maxIndex; a++)
    {
        sommeTailles += etudiants[a].taille;
    }
    
    float moyenneTailles = (float)sommeTailles / maxIndex;
    float diff = fabs(etudiants[0].taille - moyenneTailles);
    int indexMoy = 0;
    
    for (int a = 1; a < maxIndex; a++)
    {
        float currentDiff = fabs(etudiants[a].taille - moyenneTailles);
        if (currentDiff < diff)
        {
            diff = currentDiff;
            indexMoy = a;
        }
    }
    
    printf("Etudiant dont la taille est la plus proche de la moyenne :\n");
    printf("Nom : %s ", etudiants[indexMoy].nom);
    printf("Taille : %u cm\n", etudiants[indexMoy].taille);

    return 0;
}