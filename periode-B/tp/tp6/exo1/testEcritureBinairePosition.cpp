/**
 * @file testEcritureBinairePosition.cpp
 * Projet sem05-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 22/12/05
 * @brief corrige du TD n�5 sur machine - Exercice 1
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */

#include <iostream> 
#include "Position.h"
using namespace std;


/* Test d'une s�rialisation dans un flot texte d'items de type Position */ 
int main() {
	Position p;
	// D�clarez le flot fE de sortie ..........................................
	ofstream fE;
	
	char nomF[80]; 	// Nom du fichier binaire
	bool estOrigine;
	
	// Compl�tez l'ouverture de fE et son assignation au fichier de nom (nomF)
	cout << "Saisir le nom du fichier binaire en �criture : ";
	cin >> nomF;
	fE.open(nomF);

    // sortez du programme en cas d'�tat en erreur ............................
	if(!fE){
		cerr << "ouverture du fichier " << nomF << " impossible " << endl;
		return 1;
	}
	
	// Ecrivez dans le fichier d'un ensemble de positions saisies
 	// jusqu'� la saisie de la position d'origine (non enregistr�e) */	
	cout << "Saisir des positions jusqu'� la saisie de l'origine (0,0).\n";  
	cout << "Les positions seront enregistr�es dans le fichier \n";
	cout << "� l'exception de l'origine \n";
	do {
		p = saisir();
		
		if (p.abscisse == 0 && p.ordonnee == 0)
			estOrigine = true;
		else
			ecrireFB(fE, p);

	} while (!estOrigine);
	cout << "Fin d'�criture dans le fichier binaire." << endl;

	fE.close();
}
