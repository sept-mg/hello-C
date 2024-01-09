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
	... cf. exercice 2
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
 	... cf. exercice 2
}

/**
 * @brief Tri un tableau par ordre croissant en appliquant l'algorithme de tri 
 * par dénombrement (H. H. Seward, 1954). 
 * Attention, cet algorithme n'est efficace que si la plage de valeurs (i.e. la 
 * différence entre la plus grande et la plus petite) est limitée. Soit k la 
 * taille de cette plage, les complexités en temps et en espace sont en 
 * O(size + k).
 * @param[in,out] t : le tableau.
 * @param[in] size : la taille du tableau.
 */
void countingSort(int* t, int size) {
	// Point 1
	// détermination de la plus petite (min) 
	// et de la plus grande valeur (max) présentes dans t
	...

	// Point 2
	// Allocation et initialisation d'un tableau de compteurs (tcpt), 
	// un compteur par valeur possible
	...
	// Quelque soit i, tcpt[i] doit indiquer combien d'élements de t ont une 
	// valeur strictement inférieure à min + i.
  
	// Point 3
	// On commence par mettre dans tcpt[i] (le compteur de min + i) combien 
	// d'élements de t ont une valeur égale à min + i - 1 (la valeur juste 
	// inférieure).
	...
	
	// Point 4
	// Il suffit alors de cumuler les valeurs des compteurs
	...
	
	// Point 5 et 6
	// Création d'un nouveau tableau (tmp) et rangement des éléments de t dans  
	// le bon ordre. Quelque soit i, les élements de t ayant comme valeur min+i 
	// doivent être rangés à partir de l'indice tcpt[i].
	...
	  
	// Recopie du nouveau tableau dans t
	...
	
	// Désallocation mémoire
	...
}
