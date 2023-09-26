#include <stdio.h>

enum { LONGUEUR_MAX = 30, NB_ETUDIANTS_MAX = 20 };

typedef struct
{
    char nom[LONGUEUR_MAX];
    unsigned int taille; //en cm
} Etudiant;


int main() 
{
    Etudiant etudiants[NB_ETUDIANTS_MAX];

    for (int i = 0; i < NB_ETUDIANTS_MAX; i++)
    {
        char tempString[LONGUEUR_MAX];
        printf("Nom de l'étudiant : ");
        scanf("%s", tempString);

        printf("taille de l'étudiant (en cm) : ");
        unsigned int temp;
        scanf("%u", &temp);
        if(temp)
        {
            int j = 0;
            while (temp > etudiants[j].taille && j < i)
            {
                j++;
            }
            for(int k = j; k<=i; k++)
            {
                
            }
            
        }
        else i = NB_ETUDIANTS_MAX;
    }
    
    return 0;
}