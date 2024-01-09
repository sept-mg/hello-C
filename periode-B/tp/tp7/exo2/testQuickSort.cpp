/**
 * @file testQuickSort.cpp
 * Projet sem07-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 02/02/06
 * @brief Test du quicksort
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
#include <ctime> // pour clock et CLOCKS_PER_SEC
#include <iostream>

#include "util.h"
#include "sort.h"
using std::cin; using std::cout; using std::endl; using std::cerr;

/**
 * @brief Renvoie une valeur approch�e du temps CPU (en seconde) utilis� par 
 * le programme depuis le d�but de son ex�cution. 
 */
double getTime() {
 	clock_t t = clock();
	if (t == (clock_t)-1)
		return 0.;
	else
		return (double)t / CLOCKS_PER_SEC;
}

/**
 * @brief Programme de test de l'algorithme du quicksort 
 */
int main() {
	int SIZE, MAX;
	/* Param�trage du tableau initial
	 * Pour visualiser les tableaux : SIZE < 50
	 * Pour tester les algorithmes :  SIZE de l'ordre du million */
	 cout << "Taille du tableau � trier et borne stricte sup�rieure " << endl;
	 cout << "(des valeurs g�n�r�es al�atoirement) : ";
	 cin >> SIZE >> MAX;
	 
	int* tab1 = new int[SIZE]; // Allocation dynamique car la pile d'ex�cution a 
							   // une taille maximale relativement faible
	double time1, time2;
	
	init(tab1, SIZE, MAX);
	if (SIZE < 50) { // Eviter l'affichage pour une taille sup�rieure
		cout << "Tableau initial :"<< endl;
		cout << "tab1 = "; print(cout, tab1, SIZE); cout << endl;
 	}
 	
	time1 = getTime();
	quickSort(tab1, SIZE);
	time2 = getTime();

	if (!isSorted(tab1, SIZE))
		cerr << "Le tri n'est pas valide" << endl;

	cout << "Temps d'ex�cution du quickSort : " << time2 - time1 
	     << " s." << endl;
  
	if (SIZE < 50) { // Eviter l'affichage pour une taille importante
		cout << "Tableau tri� par quickSort :"<< endl;
		cout << "tab1 = "; print(cout, tab1, SIZE); cout << endl;
	}
	
	delete [] tab1;
  
	return 0;
}
