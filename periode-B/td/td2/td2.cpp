#include <iostream>
#include <cstdio>
#include <cassert>
using namespace std;

typedef int Item;

/**
 @brief type de conteneur tel que décrit dans le sujet du TP.
*/
typedef struct
{
    enum
    {
        CAPACITE = 15
    };
    Item tableau[CAPACITE];
    unsigned int nb;
} ConteneurTS;

/**
 @brief initialise un conteneur comme étant vide.
 @param[out] a le conteneur à initialiser.
*/
void init(ConteneurTS &a) // param car il y a des paramettre
{
    a.nb = 0;
}

ConteneurTS init2() /// pas bien parce qu'on copie tout une structure
{
    ConteneurTS a;
    a.nb = 0;
    return a;
}


/**
 @brief fonction qui permet de retourner une valeur a un index donner
 @param[in] c le conteneur que l'on va lire
 @param[in] i l'index a la quelle nous souhaitons lire
 @param[out] it l'item de sortie
 @pre l'index doit etre valide soit entre 0 et nb-1 inclu.
*/
void lire(const ConteneurTS &c, unsigned int i, Item &it) 
{
    assert(c.nb > i);
    it = c.tableau[i];
}

/**
 @brief fonction qui permet d'ecrire un nouvelle item ou d'en modifié un.
 @param[inout] c le conteneur dans le quel nous allons écrire.
 @param[in] i l'index au quel on va ecrire.
 @param[in] it l'intem que nous allons ecrire.
 @pre il faut que l'index soit valide : entre 0 et nb inclu tout en etant inférieur strictement a la capacité maximal 
*/
void ecrire(ConteneurTS &c, unsigned int i, const Item &it)
{
    assert(i < c.CAPACITE);
    assert(i <= c.nb);
    c.tableau[i] = it;
    if(i == c.nb) // il s'agit donc d'une nouvelle case il faut incrémenter nb.
        ++c.nb;
}

int main()
{
    ConteneurTS c;
    init(c); // comme c.nb = 0; mais moins explicite
    return 0;
}