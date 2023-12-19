#ifndef _POSITION_
#define _POSITION_

/**
 * @file Position.h
 * Projet sem05-tp-Cpp1
 * @author l'équipe pédagogique 
 * @version 1 02/12/05
 * @brief Composant de positions sur une grille
 * Structures de données et algorithmes - DUT1 Paris 5
 */
 
 #include <fstream>
 
/**
 * @brief Type position
 * invariant : la position doit être valide
*/
struct Position {
	unsigned int abscisse; // abscisse de la position
	unsigned int ordonnee; // ordonnée de la position
};

/**
 * @brief Saisie d'une position valide
 * @return la position saisie
 */
Position saisir();
 
/**
 * @brief Affichage d'une position
 * @param[in] p : la position à afficher
 */
void afficher(const Position& p);

/**
 * @brief Ecriture en mode texte d'une position dans un flot 
 * @param [in,out] fE : flot en écriture
 * @param [in] p : la position
 */
void ecrireFT(std::ofstream& fE, const Position& p);
 
/**
 * @brief Lecture en mode texte d'une position dans un flot 
 * @param [in,out] fL : flot en lecture
 * @param [in,out] p : la position lue
 */
void lireFT(std::ifstream& fL, Position& p);

/**
 * @brief Ecriture en mode binaire d'une position dans un flot 
 * @param [in,out] fE : flot en écriture
 * @param [in] p : la position
 */
void ecrireFB(std::ofstream& fE, const Position& p);


/**
 * @brief Lecture en mode binaire d'une position dans un flot 
 * @param [in,out] fL : flot en lecture
 * @param [in,out] p : la position lue
 */
void lireFB(std::ifstream& fL, Position& p);

#endif
