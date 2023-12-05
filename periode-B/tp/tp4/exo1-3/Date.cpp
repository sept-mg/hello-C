/**
 * @file Date.cpp
 * Projet sem04-cours-Cpp1
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Composant de date
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */

// Compl�ter les inclusions ...................................................
#include <iostream>
#include "Date.h"
using namespace std;
 /**
 * @brief Saisie d'une date
 * @return la date saisie
 */
Date saisir() {
	Date d;
	cout << "Date (jour? mois? annee?) ? "; 
	cin >> d.jour >> d.mois >> d.annee;
	return d;
}

/**
 * @brief Affiche une date
 * @param[in] d : la date � afficher
 */
void afficher(const Date& d) {
	cout << d.jour << '/' << d.mois << '/' << d.annee << "  ";
}
