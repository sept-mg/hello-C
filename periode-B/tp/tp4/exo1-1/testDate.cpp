/**
 * @file testDate.cpp
 * Projet sem04-cours-Cpp1
 * @author l'�quipe p�dagogique 
 * @version 1 - 29/11/2014
 * @brief Test du composant de date
 * Structures de donn�es et algorithmes - DUT1 Paris Descartes
 */
 
#include <iostream>
#include "Date.h"
using namespace std;

// Compl�ter les inclusions ...................................................

/* Test du composant de date */ 
int main() {
	Date d;
	
	cout << "Test du composant de date" << endl;
	
	cout << "Saisir des dates jusqu'� la saisie d'une ann�e nulle" << endl;  
	do {
		d = saisir();
		cout << "Date saisie : ";
		afficher(d); cout << endl;
	} while (d.annee!=0);
	
	cout << "Fin de saisie d�tect�e." << endl;
	
	return 0;	
}
