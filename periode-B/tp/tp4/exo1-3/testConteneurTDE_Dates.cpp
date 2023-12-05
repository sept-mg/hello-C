#include "ConteneurTDE.h"
#include <iostream>
using namespace std;
/* Test d'un conteneur (de type ConteneurTDE) de dates */ 
int main() {
	ConteneurTDE cDates; // D�claration du conteneur de dates test�
	Date d;
	unsigned int nbDates=0; // Nombre de dates enregistr�es dans cDates
	
	/* Initialisation du conteneur avec capacit�=2 et pasExtension=0 */
	initialiser(cDates, 2 , 2);
	
	/* Remplir le conteneur de dates 
	 * jusqu'� la saisie d'une date d'ann�e 0 (non enregistr�e) 
	 * Mettre � jour nbDates, le nombre de dates saisies*/	
	unsigned int i = 0;
	cout << "Saisir des dates jusqu'� la saisie d'une ann�e nulle" << endl;  
	cout << "Les dates (� l'exception de celle de l'ann�e nulle)" << endl;
	cout << "seront enregistr�es dans le conteneur dynamique" << endl;
	do {
		d = saisir();
		if (d.annee != 0) {
			ecrire(cDates, i++, d);
			nbDates++;
		}
	} while (d.annee!=0);
	
	/* Afficher la capacit� du conteneur de dates */	
	cout << "Capacit� du conteneur dynamique : ";
	cout << cDates.capacite << endl;
	
	/* Afficher le conteneur de dates */
	cout << "Conteneur allou� en m�moire dynamique de " << nbDates 
		 << " date(s)" << endl;
	for (unsigned int i = 0; i < nbDates; ++i) {
		d = lire(cDates, i);
		afficher(d);
	}
	
	/* D�sallouer le conteneur de dates */
	detruire(cDates);
	
	return 0;
}