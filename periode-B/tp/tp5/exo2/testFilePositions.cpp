/**
 * @file testFilePositions.cpp
 * Projet sem06-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 26/01/06
 * @brief Test d'une file de positions stock�e dans une cha�ne � simple cha�nage
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */

#include <iostream>
using namespace std;
 
#include "File.h"

/* Test d'une file de positions */ 
int main(int argc, char* argv[]) {

    File fPositions; 	// D�claration de la file de positions
    
	// Initialisation de fPositions � la cha�ne vide ..........................
	
    
    Position p;
    
    cout << "Test d'une file de positions" << endl;
    
    /* Ajout de positions dans la file
     * jusqu'� la saisie de l'origine (non ajout�e en file) */	
    cout << "Saisir des positions jusqu'� la saisie de l'origine [0,0]\n";  
    cout << "Les positions (� l'exception de celle de l'origine)\n";
    cout << "seront ajout�es � la file" << endl;
    bool estOrigine;
    do {
        p = saisir();
        estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
		// Codez l'entr�e de p (diff�rent de [0,0]) en file ...................
		
    } while (!estOrigine);
    
    // Sortie d'un el�ment de file
    cout << "Sortie d'un �l�ment de file" << endl;
 	// Codez la sortie de file ................................................
    
    // Entr�e d'un nouvel �l�ment [7, 8] dans la file
    cout << "Entr�e d'un nouvel �l�ment [7, 8] dans la file" << endl;
    p.abscisse = 7; p.ordonnee = 8;
 	// Codez l'entr�e dans la file ............................................
	
    // Affichage de la file
    cout << "Etat de la file :" << endl;
    // Codez l'affichage de la file ...........................................
	  
    // D�sallocation de la file
	// Codez la d�sallocation de la file ......................................
	
	return 0;
}
