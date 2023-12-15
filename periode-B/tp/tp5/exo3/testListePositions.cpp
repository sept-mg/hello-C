/**
 * @file testListePositions.cpp
 * Projet sem06-tp-Cpp3
 * @author l'équipe pédagogique 
 * @version 1 26/01/06
 * @brief Test d'une liste de positions stockée dans une chaîne à simple chaînage
 * Structures de données et algorithmes - DUT1 Paris 5
 */

#include <iostream>
using namespace std;
 
#include "Liste.h"

/* Test d'une liste de positions */ 
int main(int argc, char* argv[]) {

	Liste lPositions; 	// Déclaration de la liste de positions
	Position p;

	// Initialisation de lPositions à la liste vide ...........................
		

	cout << "Test d'une liste de positions" << endl;

	/* Ajout de positions en début de liste
	 * jusqu'à la saisie d'une position d'absisse 0 (non ajoutée) */	
	cout << "Saisir des positions jusqu'à la saisie de l'origine [0,0]\n";  
	cout << "Les positions (à l'exception de celle de l'origine)\n";
	cout << "seront ajoutées en début de liste" << endl;
	bool estOrigine;
	do {
		p = saisir();
		estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// Codez l'ajout de p (différent de [0,0]) dans la liste ..............
		
	} while (!estOrigine);

	// Affichage des éléments de la liste
	// Codez l'affichage de la liste ..........................................
	
	cout << endl;

    // Insertion d'un nouvel élément [7, 8] en fin de liste
	cout << "Insertion d'un nouvel élément [7, 8] en fin de liste" << endl;
	p.abscisse = 7; p.ordonnee = 8;
	// Codez l'insertion de la position .......................................
	
    
    // Suppression du deuxième élément de liste */
    cout << "Suppression du deuxième élément de liste" << endl;
	// Codez la suppression ...................................................
	

	// Affichage de la longueur de la liste
	cout << "Longueur de la liste : ";
	// Codez l'affichage ......................................................
	

	// Affichage des éléments de la liste
	cout << "Etat de la liste :" << endl;
	// Recopiez l'affichage de la liste ........................................
	
	cout << endl;

	// Désallocation de la liste
	// Codez la désallocation de la file ......................................	
	
	return 0;
}
