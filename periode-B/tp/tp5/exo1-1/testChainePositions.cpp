/**
 * @file testChainePositions.cpp
 * Projet sem06-tp-Cpp1
 * @author l'�quipe p�dagogique 
 * @version 1 26/01/06
 * @brief Test d'une cha�ne (� simple cha�nage) de positions
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */

#include <iostream>
using namespace std;
 
#include "Chaine.h"

/* Test d'une cha�ne de positions */ 
int main(int argc, char* argv[]) {

    Chaine cPositions; // D�claration de la cha�ne de positions
    
	// Initialisation de cPositions � la cha�ne vide ..........................

  
    Position p;
  
    cout << "Test d'une cha�ne de positions" << endl;
    /* Ajout de positions dans la chaine
     * jusqu'� la saisie d'une position d'absisse 0 (non ajout�e) */	
    cout << "Saisir des positions jusqu'� la saisie de l'origine [0,0]\n";  
    cout << "Les positions (� l'exception de celle de l'origine)\n";
    cout << "seront ajout�es en fin de cha�ne" << endl;
    bool estOrigine;
    do {
        p = saisir();
        estOrigine = (p.abscisse == 0) && (p.ordonnee == 0);
        // Codez l'ajout de p (diff�rent de [0,0]) en fin de cha�ne ...........

    } while (!estOrigine);
  
    // Affichage des �l�ments de la cha�ne
    cout << "Etat de la cha�ne en fin de saisie :" << endl;
    // Codez l'affichage de la cha�ne .........................................

    cout << endl;
  
    // Insertion d'un nouvel �l�ment [7, 8] en fin de cha�ne
    cout << "Insertion d'un nouvel �l�ment [7, 8] en fin de cha�ne" << endl;
    p.abscisse = 7; p.ordonnee = 8;
	// Codez l'insertion de p .................................................
  
    // Suppression de l'�l�ment en d�but de cha�ne
    cout << "Suppression de l'�l�ment en d�but de cha�ne" << endl;
	// Codez la suppression ...................................................    

    // Affichage de l'�tat de la cha�ne
  	cout << "Etat de la cha�ne :" << endl;
    // Recopiez l'affichage de la cha�ne ......................................

    cout << endl;
  
  	//D�sallocation de la cha�ne
    // Codez la d�sallocation de la cha�ne ....................................
 
 	return 0;
}
