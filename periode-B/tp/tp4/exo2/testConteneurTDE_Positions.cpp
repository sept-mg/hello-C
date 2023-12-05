/**
 * @file testConteneurTDE_Positions.cpp
 * Projet sem04-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 2 - 29/11/2014
 * @brief Test d'un conteneur de capacit� extensible de positions
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
using namespace std;

//Compl�tez les inclusions ......................................................

/* Test d'un conteneur (de type ConteneurTDE) de positions */ 
int main() {
	ConteneurTDE cPositions; // D�claration du conteneur de positions test�
	unsigned int nbPositions=0;// Nb de positions enregistr�es dans le conteneur
	Position p;
	bool estOrigine;
	
	// Initialisation du conteneur (capacite=1, pasExtension=2) .................
	
	/* Remplir le conteneur de positions 
	 * jusqu'� la saisie de la position origine (non enregistr�e) */	
	unsigned int i = 0;
	cout << "Saisir des positions jusqu'� la saisie de l'origine (0,0)\n";
	cout << "Les positions (� l'exception de l'origine)\n";
	cout << "seront enregistr�es dans le conteneur dynamique" << endl;
	do {
		p = saisir();
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		if (!estOrigine) {
			// Ecrire l'item dans le conteneur � la position i et mettre � jour i 
			// pour la prochaine �criture .......................................

			nbPositions++;
		}
	} while (!estOrigine);
	
	/* Afficher la capacit� du conteneur de positions */	
	cout << "Capacit� du conteneur dynamique : " << cPositions.capacite << endl;
	
	/* Afficher le conteneur de positions */
		cout << "Conteneur allou� en m�moire dynamique de : " << nbPositions 
			 << " position(s)" << endl; 
		for (unsigned int i = 0; i < nbPositions; ++i) {
			// lire l'item � la position i dans le conteneur ....................
			
			// afficher l'item ..................................................
		}
	
	// D�sallocation du conteneur ...............................................
	
	return 0;
}
