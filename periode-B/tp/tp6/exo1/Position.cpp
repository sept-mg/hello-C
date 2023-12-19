/**
 * @file Position.cpp
 * Projet sem05-tp-Cpp1
 * @author l'�quipe p�dagogique 
 * @version 1 19/12/05
 * @brief Composant de positions sur une grille
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */

#include <iostream>
#include <cassert>
using namespace std;

#include "Position.h"

/**
 * @brief Saisie d'une position valide
 * @return la position saisie
 */
Position saisir() {
	Position p;
	cout << "Position (abscisse? ordonnee?) ? "; 
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

/**
 * @brief Ecriture en mode texte d'une position dans un flot 
 * @param [in,out] fE : flot en �criture
 * @param [in] p : la position
 */
void ecrireFT(std::ofstream& fE, const Position& p) {
	fE << p.abscisse << ' ' << p.ordonnee << endl;
}

/**
 * @brief Lecture en mode texte d'une position dans un flot 
 * @param [in,out] fL : flot en lecture
 * @param [in,out] p : la position lue
 */
void lireFT(std::ifstream& fL, Position& p) {
	fL >> p.abscisse >> p.ordonnee;
}

void ecrireFB(std::ofstream& fE, const Position& p) {
	fE.write((char*) &p, sizeof(p));
}