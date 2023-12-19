#ifndef _PILE_
#define _PILE_

/**
 * @file Pile.h
 * Projet sem04-tp-Cpp3
 * @author l'�quipe p�dagogique 
 * @version 1 - 23/12/05
 * @brief Composant de pile � capacit� extensible suivant un pas d'extension
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
#include <fstream>

#include "ConteneurTDE.h"

/* Type pile � capacit� (>0) extensible suivant un pas d'extension (p>0) */
struct Pile {
	ConteneurTDE tab;			// tableau des �l�ments de pile en m�moire dynamique
	int sommet;				// indice de sommet de pile dans tab
};

 /**
 * @brief Initialiser une pile vide
 * la pile est allou�e en m�moire dynamique
 * @see detruire, pour une d�sallocation en fin d�utilisation
 * @param[out] p : la pile � initialiser
 * @param[in] capa : capacit� initiale de la pile
 * @param[in] pas : pas d'extension de la pile
 * @pre capa>0 et pas >0
 */
void initialiser(Pile& p, unsigned int capa, unsigned int pas);

/**
 * @brief D�sallouer une pile
 * @see initialiser, la pile a d�j� �t� initialis�e
 * @param[out] p : la pile � d�sallouer
 */
void detruire(Pile& p);

/**
 * @brief Test de pile vide
 * @param[in] p : la pile test�e
 * @return true si p est vide, false sinon
 */
bool estVide(const Pile& p);

/**
 * @brief Lire l'item au sommet de pile
 * @param[in] p : la pile
 * @return la valeur de l'item au sommet de pile
 * @pre la pile n�est pas vide
 */
Item sommet(const Pile& p);

/**
 * @brief Empiler un item sur une pile
 * @param[in,out] p : la pile
 * @param[in] it : l'item � empiler
 * @pre la pile n�est pas pleine
 */
void empiler(Pile& p, const Item& it);

/**
 * @brief D�piler l�item au sommet de pile
 * @param[in,out] p : la pile
 * @pre la pile n�est pas vide
 */
void depiler(Pile& p);

/**
 * @brief Ecriture en mode binaire d'une pile d'items dans un flot 
 * @param [in,out] fE : flot en �criture
 * @param [in] p : la pile
 */
void ecrireFB(std::ofstream& fE, const Pile& p);

#endif


