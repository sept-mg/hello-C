#ifndef _PILE_
#define _PILE_

/**
 * @file Pile.h
 * Projet sem04-tp-Cpp3
 * @author l'équipe pédagogique 
 * @version 1 - 23/12/05
 * @brief Composant de pile à capacité extensible suivant un pas d'extension
 * Structures de données et algorithmes - DUT1 Paris 5
 */
 
#include <fstream>

#include "ConteneurTDE.h"

/* Type pile à capacité (>0) extensible suivant un pas d'extension (p>0) */
struct Pile {
	ConteneurTDE tab;			// tableau des éléments de pile en mémoire dynamique
	int sommet;				// indice de sommet de pile dans tab
};

 /**
 * @brief Initialiser une pile vide
 * la pile est allouée en mémoire dynamique
 * @see detruire, pour une désallocation en fin d’utilisation
 * @param[out] p : la pile à initialiser
 * @param[in] capa : capacité initiale de la pile
 * @param[in] pas : pas d'extension de la pile
 * @pre capa>0 et pas >0
 */
void initialiser(Pile& p, unsigned int capa, unsigned int pas);

/**
 * @brief Désallouer une pile
 * @see initialiser, la pile a déjà été initialisée
 * @param[out] p : la pile à désallouer
 */
void detruire(Pile& p);

/**
 * @brief Test de pile vide
 * @param[in] p : la pile testée
 * @return true si p est vide, false sinon
 */
bool estVide(const Pile& p);

/**
 * @brief Lire l'item au sommet de pile
 * @param[in] p : la pile
 * @return la valeur de l'item au sommet de pile
 * @pre la pile n’est pas vide
 */
Item sommet(const Pile& p);

/**
 * @brief Empiler un item sur une pile
 * @param[in,out] p : la pile
 * @param[in] it : l'item à empiler
 * @pre la pile n’est pas pleine
 */
void empiler(Pile& p, const Item& it);

/**
 * @brief Dépiler l’item au sommet de pile
 * @param[in,out] p : la pile
 * @pre la pile n’est pas vide
 */
void depiler(Pile& p);

/**
 * @brief Ecriture en mode binaire d'une pile d'items dans un flot 
 * @param [in,out] fE : flot en écriture
 * @param [in] p : la pile
 */
void ecrireFB(std::ofstream& fE, const Pile& p);

#endif


