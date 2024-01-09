#ifndef _SORT_H_
#define _SORT_H_

/**
 * @file sort.h
 * Projet sem07-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 02/02/06
 * @brief Fonctions de tri par ordre croissant de tableaux d'entiers  
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
/**
 * @brief Tri un tableau par ordre croissant en appliquant l'algorithme de tri 
 * rapide (C. A. R. Hoare, 1960). 
 * La complexit� en temps est en O(size*log(size)) et celle en espace est en 
 * O(log(size)).
 * @param[in,out] t : le tableau.
 * @param[in] size : la taille du tableau.
 */
void quickSort(int* t, int size);

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
void countingSort(int* t, int size);

#endif //_SORT_H_
