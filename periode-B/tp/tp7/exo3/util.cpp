/**
 * @file util.h
 * Projet sem07-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 02/02/06
 * Quelques fonctions utilitaires pour des tableaux d'entiers  
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
#include <cstdlib> // pour srand et rand
#include <ctime> // pour time

#include "util.h"

/**
 * @brief Initialise un tableau avec des nombres al�atoires prenant des
 * valeurs dans l'intervalle [0..max[. 
 * @param[out] t : le tableau.
 * @param[in] size : la taille du tableau.
 * @param[in] max : la borne sup�rieure des valeurs al�atoires.
 */
 void init(int* t, int size, int max) {
 	// initialisation du g�n�rateur de nombres al�atoires
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
 * @pre Le tableau dest doit pouvoir contenir au moins size �l�ments.
 * @post equal(src, dest, size).
 */
void copy(int* dest, const int* src, int size) {
	for (int i = 0; i < size; ++i)
		dest[i] = src[i];
}

/**
 * @brief Teste si un tableau est tri� par ordre croissant. 
 * @param[in] t : le tableau.
 * @param[in] size : la taille du tableau.
 * @return vrai si le tableau est tri�.
 */
bool isSorted(const int* t, int size) {
	for (int i = 1; i < size; ++i)
	if (t[i - 1] > t[i])
		return false;
	return true;
}

/**
 * @brief Teste si 2 tableaux sont �gaux. 
 * @param[in] t1 : le premier tableau.
 * @param[in] t2 : le second tableau.
 * @param[in] size : la taille des 2 tableaux.
 * @return vrai si les deux tableaux sont �gaux.
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
