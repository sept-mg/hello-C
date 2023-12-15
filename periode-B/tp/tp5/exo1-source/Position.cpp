/**
 * @file Position.cpp
 * @author l'équipe pédagogique 
 * @version 1 19/12/05
 * @brief Projet sem04-tp-Cpp3 - Composant de positions sur une grille
 * Structures de données et algorithmes - DUT1 Paris 5
 */

#include "Position.h"

#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Saisie d'une position
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
