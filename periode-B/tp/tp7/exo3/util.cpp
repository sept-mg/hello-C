/**
 * @file util.h
 * Projet sem07-tp-Cpp2
 * @author l'équipe pédagogique 
 * @version 1 02/02/06
 * Quelques fonctions utilitaires pour des tableaux d'entiers  
 * Structures de données et algorithmes - DUT1 Paris 5
 */
 
#include <cstdlib> // pour srand et rand
#include <ctime> // pour time

#include "util.h"

/**
 * @brief Initialise un tableau avec des nombres aléatoires prenant des
 * valeurs dans l'intervalle [0..max[. 
 * @param[out] t : le tableau.
 * @param[in] size : la taille du tableau.
 * @param[in] max : la borne supérieure des valeurs aléatoires.
 */
 void init(int* t, int size, int max) {
 	// initialisation du générateur de nombres aléatoires
 	srand((unsigned)time(NULL));
 	// initialisation du tableau avec des nombres compris entre 0 et max - 1
 	for (int i = 0; i < size; ++i)
   		t[i] = rand() % max;
}

/**
 * @brief Copie un tableau dans un autre. 
 * @param[out] dest : le tableau destination.
 * @param[in] src : le tableau source.
 * @param[in] size : la taille des 2 tableaux.
 * @pre Le tableau dest doit pouvoir contenir au moins size éléments.
 * @post equal(src, dest, size).
 */
void copy(int* dest, const int* src, int size) {
	for (int i = 0; i < size; ++i)
		dest[i] = src[i];
}

/**
 * @brief Teste si un tableau est trié par ordre croissant. 
 * @param[in] t : le tableau.
 * @param[in] size : la taille du tableau.
 * @return vrai si le tableau est trié.
 */
bool isSorted(const int* t, int size) {
	for (int i = 1; i < size; ++i)
	if (t[i - 1] > t[i])
		return false;
	return true;
}

/**
 * @brief Teste si 2 tableaux sont égaux. 
 * @param[in] t1 : le premier tableau.
 * @param[in] t2 : le second tableau.
 * @param[in] size : la taille des 2 tableaux.
 * @return vrai si les deux tableaux sont égaux.
 */
bool equal(const int* t1, const int* t2, int size) {
	for (int i = 0; i < size; ++i)
		if (t1[i] != t2[i])
			return false;
		return true;
}

/**
 * @brief Affiche le contenu d'un tableau. 
 * @param[in] os : le flux sur lequel afficher.
 * @param[in] t : le tableau.
 * @param[in] size : la taille du tableau.
 */
void print(std::ostream& os, const int* t, int size) {
	os << "[";
	for (int i = 0; i < size; ++i) {
		os << t[i];
		if (i < size - 1)
			os << ", ";
	}
	os << "]";
}
