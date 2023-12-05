/**
 * @file testPilePositions.cpp
 * Projet sem04-tp-Cpp3
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Test d'une pile � capacit� extensible d�l�ments de type Position
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
using namespace std;

// Compl�tez les inclusions ...................................................


/* Test d'une pile (de type Pile) de positions */ 
int main(int argc, char* argv[]) {

	Pile pPositions; // D�claration de la pile de positions
	Position p;
	
	//Initialisez la pile de capacit� 1 et de pas d'extension 2 ............... 
	
	cout << "Test d'une pile de positions de capacit� extensible" << endl;
	
	/* Etat de la pile (est-elle vide ?) */ 
	if (estVide(pPositions)) cout << "La pile est vide" << endl;
	else cout << "la pile n'est pas vide" << endl;
	
	/* Ajout de positions dans la pile
	 * jusqu'� la saisie d'une position d'absisse 0 (non empil�e) */	
	cout << "Saisir des positions jusqu'� la saisie de l'origine (0,0)\n";  
	cout << "Les positions (� l'exception de celle de l'origine)\n";
	cout << "seront ajout�es � la pile" << endl;
	bool estOrigine;
	do {
		p = saisir();
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// empiler p dans la pile si p est diff�rent de l'origine .............
 
	} while (!estOrigine);
	
	cout << "Etat de la pile apr�s toutes les entr�es : ";
	if (estVide(pPositions)) 
		cout  << "la pile est vide" << endl;
	else cout << "la pile n'est pas vide" << endl;
	
	/* D�piler la pile avec affichage des �l�m�nts d�pil�s */
	if (!estVide(pPositions)) {
		cout << "Pile d�pil�e avec affichage des �l�ments d�pil�s : " << endl; 
		while (!estVide(pPositions)) {
			// Afficher le sommet de la pile ..................................

			// D�piler le sommet de pile ................................................

		}
	}
	
	// D�sallouer la pile .....................................................
	
	return 0;
}
