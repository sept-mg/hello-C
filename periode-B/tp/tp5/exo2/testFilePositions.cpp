/**
 * @file testFilePositions.cpp
 * Projet sem06-tp-Cpp2
 * @author l'équipe pédagogique 
 * @version 1 26/01/06
 * @brief Test d'une file de positions stockée dans une chaîne à simple chaînage
 * Structures de données et algorithmes - DUT1 Paris 5
 */

#include <iostream>
using namespace std;
 
#include "File.h"

/* Test d'une file de positions */ 
int main(int argc, char* argv[]) {

    File fPositions; 	// Déclaration de la file de positions
    
	// Initialisation de fPositions à la chaîne vide ..........................
	
    
    Position p;
    
    cout << "Test d'une file de positions" << endl;
    
    /* Ajout de positions dans la file
     * jusqu'à la saisie de l'origine (non ajoutée en file) */	
    cout << "Saisir des positions jusqu'à la saisie de l'origine [0,0]\n";  
    cout << "Les positions (à l'exception de celle de l'origine)\n";
    cout << "seront ajoutées à la file" << endl;
    bool estOrigine;
    do {
        p = saisir();
        estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// Codez l'entrée de p (différent de [0,0]) en file ...................
		
    } while (!estOrigine);
    
    // Sortie d'un elément de file
    cout << "Sortie d'un élément de file" << endl;
 	// Codez la sortie de file ................................................
    
    // Entrée d'un nouvel élément [7, 8] dans la file
    cout << "Entrée d'un nouvel élément [7, 8] dans la file" << endl;
    p.abscisse = 7; p.ordonnee = 8;
 	// Codez l'entrée dans la file ............................................
	
    // Affichage de la file
    cout << "Etat de la file :" << endl;
    // Codez l'affichage de la file ...........................................
	  
    // Désallocation de la file
	// Codez la désallocation de la file ......................................
	
	return 0;
}
