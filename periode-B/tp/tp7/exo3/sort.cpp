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
	... cf. exercice 2
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
 	... cf. exercice 2
}

/**
 * @brief Tri un tableau par ordre croissant en appliquant l'algorithme de tri 
 * par d�nombrement (H. H. Seward, 1954). 
 * Attention, cet algorithme n'est efficace que si la plage de valeurs (i.e. la 
 * diff�rence entre la plus grande et la plus petite) est limit�e. Soit k la 
 * taille de cette plage, les complexit�s en temps et en espace sont en 
 * O(size + k).
 * @param[in,out] t : le tableau.
 * @param[in] size : la taille du tableau.
 */
void countingSort(int* t, int size) {
	// Point 1
	// d�termination de la plus petite (min) 
	// et de la plus grande valeur (max) pr�sentes dans t
	...

	// Point 2
	// Allocation et initialisation d'un tableau de compteurs (tcpt), 
	// un compteur par valeur possible
	...
	// Quelque soit i, tcpt[i] doit indiquer combien d'�lements de t ont une 
	// valeur strictement inf�rieure � min + i.
  
	// Point 3
	// On commence par mettre dans tcpt[i] (le compteur de min + i) combien 
	// d'�lements de t ont une valeur �gale � min + i - 1 (la valeur juste 
	// inf�rieure).
	...
	
	// Point 4
	// Il suffit alors de cumuler les valeurs des compteurs
	...
	
	// Point 5 et 6
	// Cr�ation d'un nouveau tableau (tmp) et rangement des �l�ments de t dans  
	// le bon ordre. Quelque soit i, les �lements de t ayant comme valeur min+i 
	// doivent �tre rang�s � partir de l'indice tcpt[i].
	...
	  
	// Recopie du nouveau tableau dans t
	...
	
	// D�sallocation m�moire
	...
}
