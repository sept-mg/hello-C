/**
 * @file testEcriturePile.cpp
 * Projet sem05-tp-Cpp3
 * @author l'équipe pédagogique 
 * @version 1 22/12/05
 * @brief corrige du TD n°5 sur machine - Exercice 3
 * Structures de données et algorithmes - DUT1 Paris 5
 */
 
// Complétez les inclusions ...................................................


#include "Pile.h"

/* Test de la sérialisation en écriture de la pile (type Pile) de positions */  
int main() {
	
	// Déclarez la pile de positions (pilePositions) ..........................

	Position p;
	char nomF[80];
	bool estOrigine;
	// Déclarez la le flot de sortie (fE) .....................................


	
	/* Ouverture d'un flot binaire en écriture */
	cout << "Saisir le nom du fichier binaire : ";
	cin >> nomF;
	// Complétez l'ouverture de fE et son assignation au fichier de nom (nomF)
	// ........................................................................


 	if (fE.fail()) {
		cerr << "Impossible d'écrire dans le fichier\n";
		exit(1);
	}   
 
	// Complétez l'initialisation de la pile (cf. Pile.h)
	// Il s'agit d'une pile à capacité extensible ............................. 

	
	/* Ajout de positions dans la pile
	 * jusqu'à la saisie d'une position d'absisse 0 (empilée) */
	cout << "Saisir des positions jusqu'à la saisie de l'origine (0,0).\n";  
	cout << "Les positions seront stockées dans la pile ";
	cout << "à l'exception de l'origine.\n";
	do {
		p = saisir();		// saisie de position
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// Si p est différent de l'origine, empilez p dans la pile ............

	} while (!estOrigine);
	cout << "Fin de stockage dans la pile." << endl;
	 
	// Complétez la sauvegarde (binaire) de la pile ...........................

	cout << "Sauvegarde de la pile de positions." << endl;
	
	// Destruction de la pile .................................................

	
	// Fermeture du flot binaire ..............................................

}
