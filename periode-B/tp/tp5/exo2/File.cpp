/**
 * @file File.cpp
 * Projet sem06-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 2 - 13/01/10
 * @brief Composant de file d'items stock�e dans une cha�ne � simple cha�nage
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
#include <cassert>
#include "File.h"

/**
 * @brief initialiser une file vide
 * la file est allou�e en m�moire dynamique
 * @see detruire, elle est � d�sallouer en fin d�utilisation
 * @param[out] f : la file � initialiser
 */
void initialiser(File& f) {
	// Codez la fonction ......................................................
	
}

/**
 * @brief D�sallouer une file
 * @see initialiser, la file a d�j� �t� allou�e en m�moire dynamique
 * @param[out] f : la file 
 */
void detruire(File& f) {
	// Codez la fonction ......................................................
	
}

/**
 * @brief Test de file vide 
 * @param[in] f : la file test�e
 * @return true si f est vide, false sinon
 */
bool estVide(const File& f) {
	// Codez la fonction ......................................................
	
}

/**
 * @brief Lire l'item en t�te de file 
 * @param[in] f : la file
 * @return la valeur de l'item en t�te de file
 * @pre la file n�est pas vide
 */
Item tete(const File& f) {
	// Codez la fonction ......................................................
	
}

/**
 * @brief Entrer un item dans la file
 * @param[in,out] f : la file
 * @param[in] it : l'item � entrer
 * @pre f n�est pas pleine
 */
void entrer(File& f, const Item& it) {
	// Codez la fonction ......................................................
	
}

/**
 * @brief Sortir l�item t�te de file
 * @param[in,out] f : la file
 * @pre f n�est pas vide
 */
void sortir(File& f) {
	// Codez la fonction ......................................................
	
}


