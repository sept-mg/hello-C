/**
 * @file testConteneurTDE_Positions.cpp
 * Projet sem04-tp-Cpp2
 * @author l'équipe pédagogique 
 * @version 2 - 29/11/2014
 * @brief Test d'un conteneur de capacité extensible de positions
 * Structures de données et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
using namespace std;

//Complétez les inclusions ......................................................

/* Test d'un conteneur (de type ConteneurTDE) de positions */ 
int main() {
	ConteneurTDE cPositions; // Déclaration du conteneur de positions testé
	unsigned int nbPositions=0;// Nb de positions enregistrées dans le conteneur
	Position p;
	bool estOrigine;
	
	// Initialisation du conteneur (capacite=1, pasExtension=2) .................
	
	/* Remplir le conteneur de positions 
	 * jusqu'à la saisie de la position origine (non enregistrée) */	
	unsigned int i = 0;
	cout << "Saisir des positions jusqu'à la saisie de l'origine (0,0)\n";
	cout << "Les positions (à l'exception de l'origine)\n";
	cout << "seront enregistrées dans le conteneur dynamique" << endl;
	do {
		p = saisir();
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		if (!estOrigine) {
			// Ecrire l'item dans le conteneur à la position i et mettre à jour i 
			// pour la prochaine écriture .......................................

			nbPositions++;
		}
	} while (!estOrigine);
	
	/* Afficher la capacité du conteneur de positions */	
	cout << "Capacité du conteneur dynamique : " << cPositions.capacite << endl;
	
	/* Afficher le conteneur de positions */
		cout << "Conteneur alloué en mémoire dynamique de : " << nbPositions 
			 << " position(s)" << endl; 
		for (unsigned int i = 0; i < nbPositions; ++i) {
			// lire l'item à la position i dans le conteneur ....................
			
			// afficher l'item ..................................................
		}
	
	// Désallocation du conteneur ...............................................
	
	return 0;
}
