/**
 * @file testLectureBinairePilePosition.cpp
 * Projet sem05-tp-Cpp4
 * @author l'�quipe p�dagogique 
 * @version 1 22/12/05
 * @brief corrige du TD n�5 sur machine - Exercice 4
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
// Compl�tez les inclusions ...................................................


#include "Pile.h"

/* Test de la s�rialisation en lecture de la pile (type Pile) de positions */ 
int main() {
	
	char nomF[80];
	// D�clarez la pile de positions (pilePositions) ..........................

	// D�clarez la le flot de sortie (fE) .....................................

	
	/* Ouverture d'un flot binaire en lecture */
	cout << "Saisir le nom du fichier binaire : ";
	cin >> nomF;
	// Compl�tez l'ouverture de fE et son assignation au fichier de nom (nomF)
	// ........................................................................


	if (fL.fail()) {
		cerr << "Impossible de lire le fichier\n";
		exit(1);
	}  
	
	cout << "Lecture dans le fichier binaire de la pile de positions" << endl;
	// Compl�tez la lecture de la pile ........................................

	
	// Fermeture du flot binaire ..............................................

	
	/* Etat de la pile */ 
	if (estVide(pilePositions)) cout << "la pile est vide." << endl;
	else cout << "la pile n'est pas vide." << endl;
	
	/* Afficher le contenu de la pile */
	cout << "Contenu de la pile :" << endl;
	// Affichez la pile .......................................................

	cout << "\nFin de lecture du fichier binaire et d'affichage de la pile.\n";
	
	// D�sallouez la pile .....................................................

}
