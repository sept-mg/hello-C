/**
 * @file testListePositions.cpp
 * Projet sem06-tp-Cpp3
 * @author l'�quipe p�dagogique 
 * @version 1 26/01/06
 * @brief Test d'une liste de positions stock�e dans une cha�ne � simple cha�nage
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */

#include <iostream>
using namespace std;
 
#include "Liste.h"

/* Test d'une liste de positions */ 
int main(int argc, char* argv[]) {

	Liste lPositions; 	// D�claration de la liste de positions
	Position p;

	// Initialisation de lPositions � la liste vide ...........................
		

	cout << "Test d'une liste de positions" << endl;

	/* Ajout de positions en d�but de liste
	 * jusqu'� la saisie d'une position d'absisse 0 (non ajout�e) */	
	cout << "Saisir des positions jusqu'� la saisie de l'origine [0,0]\n";  
	cout << "Les positions (� l'exception de celle de l'origine)\n";
	cout << "seront ajout�es en d�but de liste" << endl;
	bool estOrigine;
	do {
		p = saisir();
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// Codez l'ajout de p (diff�rent de [0,0]) dans la liste ..............
		
	} while (!estOrigine);

	// Affichage des �l�ments de la liste
	// Codez l'affichage de la liste ..........................................
	
	cout << endl;

    // Insertion d'un nouvel �l�ment [7, 8] en fin de liste
	cout << "Insertion d'un nouvel �l�ment [7, 8] en fin de liste" << endl;
	p.abscisse = 7; p.ordonnee = 8;
	// Codez l'insertion de la position .......................................
	
    
    // Suppression du deuxi�me �l�ment de liste */
    cout << "Suppression du deuxi�me �l�ment de liste" << endl;
	// Codez la suppression ...................................................
	

	// Affichage de la longueur de la liste
	cout << "Longueur de la liste : ";
	// Codez l'affichage ......................................................
	

	// Affichage des �l�ments de la liste
	cout << "Etat de la liste :" << endl;
	// Recopiez l'affichage de la liste ........................................
	
	cout << endl;

	// D�sallocation de la liste
	// Codez la d�sallocation de la file ......................................	
	
	return 0;
}
