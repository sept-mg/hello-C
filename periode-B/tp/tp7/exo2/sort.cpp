/**
 * @file sort.cpp
 * Projet sem07-tp-Cpp2
 * @author l'équipe pédagogique 
 * @version 1 02/02/06
 * @brief Fonctions de tri par ordre croissant de tableaux d'entiers  
 * Structures de données et algorithmes - DUT1 Paris 5
 */
#include <cstdlib> // pour qsort
#include <climits> // pour INT_MAX et INT_MIN
#include "sort.h"

/**
 * @brief La fonction de comparaison de deux items employée dans quickSort
 * @param[in] p1 : pointeur générique sur le premier argument 
 * @param[in] p2 : pointeur générique sur le deuxième argument 
 */
int comp(const void* p1, const void*p2) {
	...
}

/**
 * @brief Tri un tableau par ordre croissant en appliquant l'algorithme de tri 
 * rapide (C. A. R. Hoare, 1960) de la bibliothèque standard C
 * La complexité en temps est en O(size*log(size)) et celle en espace est en 
 * O(log(size)).
 * @param[in,out] t : le tableau.
 * @param[in] size : la taille du tableau.
 */
void quickSort(int* t, int size) {
 	...
}
