/**
 * @file sort.cpp
 * Projet sem07-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 02/02/06
 * @brief Fonctions de tri par ordre croissant de tableaux d'entiers  
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
#include <cstdlib> // pour qsort
#include <climits> // pour INT_MAX et INT_MIN
#include "sort.h"

/**
 * @brief La fonction de comparaison de deux items employ�e dans quickSort
 * @param[in] p1 : pointeur g�n�rique sur le premier argument 
 * @param[in] p2 : pointeur g�n�rique sur le deuxi�me argument 
 */
int comp(const void* p1, const void*p2) {
	...
}

/**
 * @brief Tri un tableau par ordre croissant en appliquant l'algorithme de tri 
 * rapide (C. A. R. Hoare, 1960) de la biblioth�que standard C
 * La complexit� en temps est en O(size*log(size)) et celle en espace est en 
 * O(log(size)).
 * @param[in,out] t : le tableau.
 * @param[in] size : la taille du tableau.
 */
void quickSort(int* t, int size) {
 	...
}
