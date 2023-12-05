#ifndef _POSITION_
#define _POSITION_

/**
 * @file Position.h
 * Projet sem04-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Composant de positions sur une grille 2D
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */
 
/**
 * @brief Type position
*/
struct Position {
	unsigned int abscisse; // abscisse de la position
	unsigned int ordonnee; // ordonn�e de la position
};

/**
 * @brief Saisie d'une position
 * @return la position saisie
 */
 Position saisir();
 
/**
 * @brief Affichage d'une position
 * @param[in] p : la position � afficher
 */
void afficher(const Position& p);

#endif
