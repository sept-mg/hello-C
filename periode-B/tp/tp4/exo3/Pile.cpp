/**
 * @file Pile.cpp
 * Projet sem04-cours-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Composant de pile � capacit� param�tr�e
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
#include <cassert>

#include "Pile.h"

 /**
 * @brief Initialiser une pile vide
 * la pile est allou�e en m�moire dynamique
 * @see detruire, pour une d�sallocation en fin d�utilisation
 * @param[out] p : la pile � initialiser
 * @param[in] c : capacit� de la pile (nb maximum d�items stock�s)
 * @pre c>0 
 */
void initialiser(Pile& p, unsigned int c) {
	assert(c>0);
	p.capacite = c;	
	p.tab = new Item[c];
	p.sommet = -1; 
}

/**
 * @brief D�sallouer une pile
 * @see initialiser, la pile a d�j� �t� initialis�e
 * @param[in,out] p : la pile � d�sallouer
 */
void detruire(Pile& p) {
	delete [] p.tab;
	p.tab = NULL;
}

/**
 * @brief Test de pile pleine
 * @param[in] p : la pile test�e
 * @return true si p est pleine, false sinon
 */
bool estPleine(const Pile& p) {
	return (p.sommet == (p.capacite-1));
}

/**
 * @brief Test de pile vide
 * @param[in] p : la pile test�e
 * @return true si p est vide, false sinon
 */
bool estVide(const Pile& p) {
	return (p.sommet == -1);
}

/**
 * @brief Lire l'item au sommet de pile
 * @param[in] p : la pile
 * @return la valeur de l'item au sommet de pile
 * @pre la pile n�est pas vide
 */
Item sommet(const Pile& p) {
	assert(!estVide(p));
	return p.tab[p.sommet];
}

/**
 * @brief Empiler un item sur une pile
 * @param[in,out] p : la pile
 * @param[in] it : l'item � empiler
 * @pre la pile n�est pas pleine
 */
void empiler(Pile& p, const Item& it) {
	assert(!estPleine(p));
	p.sommet++;
	p.tab[p.sommet] = it;
}

/**
 * @brief D�piler l�item au sommet de pile
 * @param[in,out] p : la pile
 * @pre la pile n�est pas vide
 */
void depiler(Pile& p) {
	assert(!estVide(p));
	p.sommet--;
}
