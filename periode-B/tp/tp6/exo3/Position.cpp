/**
 * @file Position.cpp
 * Projet sem05-tp-Cpp1
 * @author l'équipe pédagogique 
 * @version 1 19/12/05
 * @brief Composant de positions sur une grille
 * Structures de données et algorithmes - DUT1 Paris 5
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
 * @param[in] p : la position à afficher
 */
void afficher(const Position& p) {
	cout << "[" << p.abscisse << ", " << p.ordonnee << "] ";
}

/**
 * @brief Ecriture en mode texte d'une position dans un flot 
 * @param [in,out] fE : flot en écriture
 * @param [in] p : la position
 */
void ecrireFT(std::ofstream& fE, const Position& p) {
	fE << p.abscisse << ' ' << p.ordonnee << endl;
}

/**
 * @brief Ecriture en mode binaire d'une position dans un flot 
 * @param [in,out] fE : flot en écriture
 * @param [in] p : la position
 */
void ecrireFB(std::ofstream& fE, const Position& p) {
	fE.write((char*)&p, sizeof(p));
}

/**
 * @brief Lecture en mode texte d'une position dans un flot 
 * @param [in,out] fL : flot en lecture
 * @param [in,out] p : la position lue
 */
void lireFT(std::ifstream& fL, Position& p) {
	fL >> p.abscisse >> p.ordonnee;
}

/**
 * @brief Lecture en mode binaire d'une position dans un flot 
 * @param [in,out] fL : flot en lecture
 * @param [in,out] p : la position lue
 */
void lireFB(std::ifstream& fL, Position& p) {
	fL.read((char*)&p, sizeof(p));
}

