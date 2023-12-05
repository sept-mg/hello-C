/**
 * @file Position.cpp
 * Projet sem04-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Composant de positions sur une grille 2D
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
#include <cassert>
using namespace std;

#include "Position.h"

/**
 * @brief Saisie d'une position
 * @return la position saisie
 */
Position saisir() {
	Position p;
	cout << "Position (abscisse? ordonn�e?) ? "; 
	cin >> p.abscisse >> p.ordonnee;
	return p;
}
 
/**
 * @brief Affichage d'une position
 * @param[in] p : la position � afficher
 */
void afficher(const Position& p) {
	cout << "[" << p.abscisse << ", " << p.ordonnee << "] ";
}
