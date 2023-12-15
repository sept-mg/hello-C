/**
 * @file testChainePositions.cpp
 * Projet sem06-tp-Cpp1
 * @author l'équipe pédagogique 
 * @version 1 26/01/06
 * @brief Test d'une chaîne (à simple chaînage) de positions
 * Structures de données et algorithmes - DUT1 Paris 5
 */

#include <iostream>
using namespace std;
 
#include "Chaine.h"

/* Test d'une chaîne de positions */ 
int main(int argc, char* argv[]) {

    Chaine cPositions; // Déclaration de la chaîne de positions
    
	// Initialisation de cPositions à la chaîne vide ..........................

  
    Position p;
  
    cout << "Test d'une chaîne de positions" << endl;
    /* Ajout de positions dans la chaine
     * jusqu'à la saisie d'une position d'absisse 0 (non ajoutée) */	
    cout << "Saisir des positions jusqu'à la saisie de l'origine [0,0]\n";  
    cout << "Les positions (à l'exception de celle de l'origine)\n";
    cout << "seront ajoutées en fin de chaîne" << endl;
    bool estOrigine;
    do {
        p = saisir();
        estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
        // Codez l'ajout de p (différent de [0,0]) en fin de chaîne ...........

    } while (!estOrigine);
  
    // Affichage des éléments de la chaîne
    cout << "Etat de la chaîne en fin de saisie :" << endl;
    // Codez l'affichage de la chaîne .........................................

    cout << endl;
  
    // Insertion d'un nouvel élément [7, 8] en fin de chaîne
    cout << "Insertion d'un nouvel élément [7, 8] en fin de chaîne" << endl;
    p.abscisse = 7; p.ordonnee = 8;
	// Codez l'insertion de p .................................................
  
    // Suppression de l'élément en début de chaîne
    cout << "Suppression de l'élément en début de chaîne" << endl;
	// Codez la suppression ...................................................    

    // Affichage de l'état de la chaîne
  	cout << "Etat de la chaîne :" << endl;
    // Recopiez l'affichage de la chaîne ......................................

    cout << endl;
  
  	//Désallocation de la chaîne
    // Codez la désallocation de la chaîne ....................................
 
 	return 0;
}
