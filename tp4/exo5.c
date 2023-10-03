#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int choiceRandomNumber(unsigned int seed, unsigned int max)
{
    srand(seed);
    return rand() % max;
}

int reponceArbitre(unsigned int rdNumber, unsigned int choix)
{
    if (rdNumber==choix)
    {
        return 2;
    }
    

    printf("\narbitre : \"le chiffre au quel je pense est plus %s que le tiens\".\n", (choix < rdNumber) ? "grand" : "petit");
    return choix < rdNumber;
}

void botGame(unsigned int rdNumber, unsigned int MAX)
{
    unsigned int choix = 0;
    unsigned int compar;
    unsigned int max = MAX;
    unsigned int temp;
    if (rdNumber == 0)
    {
        printf("joueur : \"je propose : %u\"\n", choix);
    }
    
    while (choix != rdNumber)
    {
        temp = choix;
        choix = (choix + max)/2;
        printf("\njoueur : \"je propose : %u\"\n", choix);
        compar = reponceArbitre(rdNumber, choix);
        if (compar==0)
        {
            max = choix;
            choix = temp;
        }
        
    }
}

void humainGame(unsigned int rdNumber)
{

    int choiceRequest()
    {
        printf("entre votre chiffre : ");
    }

    unsigned int choix;
    choiceRequest();
    scanf("%u", &choix);

    while (choix != rdNumber)
    {
        reponceArbitre(rdNumber, choix); 
        choiceRequest(choix);
        scanf("%u", &choix);

    }
}

int main()
{
    const unsigned int MAX = 10;

    unsigned int rdNumber = choiceRandomNumber((unsigned int)time(NULL) + 300, MAX);
    unsigned int mode;
    
    do
    {
        printf("0 - A vous de trouver le chiffre entre 0 et %d inclus.\n\n1 - L'ordinateur joue intelligement.\n\nchoix du mode de jeux : ", MAX-1);
        scanf("%u", &mode);
    }
    while (mode < 0 || mode > 1);
    
    if(mode)
    {
        botGame(rdNumber, MAX);
    }
    else
    {
        humainGame(rdNumber);
    }
    
    printf("\narbitre : \"bravo ! tu a trouvé je pensais bien au chiffre %u\".\n", rdNumber);
    return 0;
}