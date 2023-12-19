/**
 * @file testEcriturePile.cpp
 * Projet sem05-tp-Cpp3
 * @author l'�quipe p�dagogique 
 * @version 1 22/12/05
 * @brief corrige du TD n�5 sur machine - Exercice 3
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
// Compl�tez les inclusions ...................................................


#include "Pile.h"

/* Test de la s�rialisation en �criture de la pile (type Pile) de positions */  
int main() {
	
	// D�clarez la pile de positions (pilePositions) ..........................

	Position p;
	char nomF[80];
	bool estOrigine;
	// D�clarez la le flot de sortie (fE) .....................................


	
	/* Ouverture d'un flot binaire en �criture */
	cout << "Saisir le nom du fichier binaire : ";
	cin >> nomF;
	// Compl�tez l'ouverture de fE et son assignation au fichier de nom (nomF)
	// ........................................................................


 	if (fE.fail()) {
		cerr << "Impossible d'�crire dans le fichier\n";
		exit(1);
	}   
 
	// Compl�tez l'initialisation de la pile (cf. Pile.h)
	// Il s'agit d'une pile � capacit� extensible ............................. 

	
	/* Ajout de positions dans la pile
	 * jusqu'� la saisie d'une position d'absisse 0 (empil�e) */
	cout << "Saisir des positions jusqu'� la saisie de l'origine (0,0).\n";  
	cout << "Les positions seront stock�es dans la pile ";
	cout << "� l'exception de l'origine.\n";
	do {
		p = saisir();		// saisie de position
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// Si p est diff�rent de l'origine, empilez p dans la pile ............

	} while (!estOrigine);
	cout << "Fin de stockage dans la pile." << endl;
	 
	// Compl�tez la sauvegarde (binaire) de la pile ...........................

	cout << "Sauvegarde de la pile de positions." << endl;
	
	// Destruction de la pile .................................................

	
	// Fermeture du flot binaire ..............................................

}
