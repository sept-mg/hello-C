/**
 * @file testPilePositions.cpp
 * Projet sem04-tp-Cpp3
 * @author l'équipe pédagogique 
 * @version 1 - 29/11/2014
 * @brief Test d'une pile à capacité extensible déléments de type Position
 * Structures de données et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
using namespace std;

// Complétez les inclusions ...................................................


/* Test d'une pile (de type Pile) de positions */ 
int main(int argc, char* argv[]) {

	Pile pPositions; // Déclaration de la pile de positions
	Position p;
	
	//Initialisez la pile de capacité 1 et de pas d'extension 2 ............... 
	
	cout << "Test d'une pile de positions de capacité extensible" << endl;
	
	/* Etat de la pile (est-elle vide ?) */ 
	if (estVide(pPositions)) cout << "La pile est vide" << endl;
	else cout << "la pile n'est pas vide" << endl;
	
	/* Ajout de positions dans la pile
	 * jusqu'à la saisie d'une position d'absisse 0 (non empilée) */	
	cout << "Saisir des positions jusqu'à la saisie de l'origine (0,0)\n";  
	cout << "Les positions (à l'exception de celle de l'origine)\n";
	cout << "seront ajoutées à la pile" << endl;
	bool estOrigine;
	do {
		p = saisir();
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// empiler p dans la pile si p est différent de l'origine .............
 
	} while (!estOrigine);
	
	cout << "Etat de la pile après toutes les entrées : ";
	if (estVide(pPositions)) 
		cout  << "la pile est vide" << endl;
	else cout << "la pile n'est pas vide" << endl;
	
	/* Dépiler la pile avec affichage des éléménts dépilés */
	if (!estVide(pPositions)) {
		cout << "Pile dépilée avec affichage des éléments dépilés : " << endl; 
		while (!estVide(pPositions)) {
			// Afficher le sommet de la pile ..................................

			// Dépiler le sommet de pile ................................................

		}
	}
	
	// Désallouer la pile .....................................................
	
	return 0;
}
