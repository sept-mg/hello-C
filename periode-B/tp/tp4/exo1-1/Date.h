#ifndef _DATE_
#define _DATE_

/**
 * @file Date.h
 * Projet sem04-cours-Cpp1
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Composant de date
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */

/**
 * @brief Structure de donn�es de type Date
*/
struct Date {
	unsigned short jour, mois, annee;
};

/**
 * @brief Saisie d'une date
 * @return la date saisie
 */
 Date saisir();
 
/**
 * @brief Affichage d'une date
 * @param[in] d : la date � afficher
 */
 void afficher(const Date& d);
 
 #endif
