/**
 * @file testCountingSortVsQuickSort.cpp
 * Projet sem07-tp-Cpp3
 * @author l'équipe pédagogique 
 * @version 1 02/02/06
 * @brief Test et comparaison du countingSort et du quicksort
 * Structures de données et algorithmes - DUT1 Paris 5
 */

#include <ctime> // pour clock et CLOCKS_PER_SEC
#include <iostream>

#include "util.h"
#include "sort.h"
using std::cin; using std::cout; using std::endl; using std::cerr;

/**
 * @brief Renvoie une valeur approchée du temps CPU (en seconde) utilisé par 
 * le programme depuis le début de son exécution. 
 */
double getTime() {
	clock_t t = clock();
	if (t == (clock_t)-1)
		return 0.;
	else
		return (double)t / CLOCKS_PER_SEC;
}

/**
 * @brief Programme de test des algorithmes de tri CountingSort et quickSort
 */
int main() {
	int SIZE, MAX;
	/* Paramétrage du tableau initial
	 * Pour visualiser les tableaux : SIZE < 50
	 * Pour tester les algorithmes :  SIZE de l'ordre du million */
	 cout << "Taille du tableau à trier et borne stricte supérieure " << endl;
	 cout << "(des valeurs générées aléatoirement) : ";
	 cin >> SIZE >> MAX;

	int* tab1 = new int[SIZE]; // Allocation dynamique car la pile d'exécution a 
	int* tab2 = new int[SIZE]; // une taille maximale relativement faible
	double time1, time2, time3;

	init(tab1, SIZE, MAX);
	copy(tab2, tab1, SIZE);

	if (SIZE < 50) { // Eviter l'affichage pour une taille supérieure
		cout << "Tableau initial :"<< endl;
		cout << "tab1 = "; print(cout, tab1, SIZE); cout << endl;
 	}

	time1 = getTime();
		countingSort(tab1, SIZE);
	time2 = getTime();
		quickSort(tab2, SIZE);
	time3 = getTime();

	if (!isSorted(tab1, SIZE) || !equal(tab1, tab2, SIZE))
		std::cerr << "Au moins un des algorithmes de tri est faux!!" << endl;

	cout << "Temps d'exécution du countingSort : " << time2 - time1 
	     << " s." << endl;
	cout << "Temps d'exécution du quickSort    : " << time3 - time2 
	     << " s." <<  endl;

	if (SIZE < 50) { // Eviter l'affichage pour une taille importante
		cout << "Tableau trié par countingSort :"<< endl;
		cout << "tab1 = "; print(cout, tab1, SIZE); cout << endl;
		cout << "Tableau trié par quickSort :"<< endl;
		cout << "tab2 = "; print(cout, tab2, SIZE); cout << endl;
	}

	delete [] tab1;
	delete [] tab2;

	return 0;
}
