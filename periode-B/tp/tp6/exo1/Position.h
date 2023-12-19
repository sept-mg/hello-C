#ifndef _POSITION_
#define _POSITION_

/**
 * @file Position.h
 * Projet sem05-tp-Cpp1
 * @author l'�quipe p�dagogique 
 * @version 1 02/12/05
 * @brief Composant de positions sur une grille
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
 #include <iostream>
 #include <fstream>
 // aux entr�es-sorties sur fichier ...........................................
 
 
/**
 * @brief Type position
 * invariant : la position doit �tre valide
*/
struct Position {
	unsigned int abscisse; // abscisse de la position
	unsigned int ordonnee; // ordonn�e de la position
};

/**
 * @brief Saisie d'une position valide
 * @return la position saisie
 */
Position saisir();
 
/**
 * @brief Affichage d'une position
 * @param[in] p : la position � afficher
 */
void afficher(const Position& p);

/**
 * @brief Ecriture en mode texte d'une position dans un flot 
 * @param [in,out] fe : flot en �criture
 * @param [in] p : la position
 */
void ecrireFT(std::ofstream& fe, const Position& p);
 
/**
 * @brief Lecture en mode texte d'une position dans un flot 
 * @param [in,out] fl : flot en lecture
 * @param [in,out] p : la position lue
 */
void lireFT(std::ifstream& fl, Position& p);

/**
 * @brief Ecriture binaire d'une position dans un flot 
 * @param [in,out] fE : flot en �criture
 * @param [in] p : la position
 */
void ecrireFB(std::ofstream& fE, const Position& p);
// �criture de la position p dans le flot de sortie fE ........................

 
#endif
