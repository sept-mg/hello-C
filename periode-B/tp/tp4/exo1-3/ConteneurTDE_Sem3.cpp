/**
 * @file ConteneurTDE.cpp
 * Projet sem04-tp-Cpp1-3
 * @author l'équipe pédagogique 
 * @version 2 - 29/11/2014
 * @brief corrige du TD n°3 sur machine - Exercice 2
 * Structures de données et algorithmes - DUT1 Paris Descartes
 */

#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Structure de données de type Date
 */
struct Date {
	unsigned short jour, mois, annee;
};

 /**
 * @brief Saisie d'une date
 * @return la date saisie
 */
Date saisir() {
	Date d;
	cout << "Date (jour? mois? annee?) ? "; 
	cin >> d.jour >> d.mois >> d.annee;
	return d;
}

/**
 * @brief Affiche une date
 * @param[in] d : la date à afficher
 */
void afficher(const Date& d) {
	cout << d.jour << '/' << d.mois << '/' << d.annee << "  ";
}

// Spécialisation du type Item (l'item est spécialisé ici en date)
typedef Date Item;

/** @brief Conteneur d'items alloués en mémoire dynamique
 *  de capacité extensible suivant un pas d'extension
 */ 
struct ConteneurTDE {
    unsigned int capacite; 	   // capacité du conteneur (>0)
	unsigned int pasExtension; // pas d'extension du conteneur (>0)
	Item* tab;				   // conteneur alloué en mémoire dynamique
};

void initialiser(ConteneurTDE& t, unsigned int c, unsigned int p);
void detruire(ConteneurTDE& t);
Item lire(const ConteneurTDE& t, unsigned int i); 
void ecrire(ConteneurTDE& t, unsigned int i, const Item& it);

/**
 * @brief Initialise un conteneur d'items
 * Allocation en mémoire dynamique du conteneur d'items
 * de capacité (capa) extensible par pas d'extension (p)
 * @see detruire, pour sa désallocation en fin d'utilisation 
 * @param[out] c : le conteneur d'items
 * @param [in] capa : capacité du conteneur
 * @param [in] p : pas d'extension de capacité
 * @pre capa>0 et p>0
 */
void initialiser(ConteneurTDE& c, unsigned int capa, unsigned int p) {
	assert((capa>0) && (p>0));
	c.capacite = capa;
	c.pasExtension = p;
	// arrêt du programme en cas d'erreur d'allocation
	c.tab = new Item[capa];
	/* Affichage pour une trace de l'allocation en TP
	 * Affichage à supprimer après le test du conteneur */	
	cout << "Allocation initiale de " << capa*sizeof(Item) << " octets ("
		 << capa << " item(s))" << endl;
}

/**
 * @brief Désalloue un conteneur d'items en mémoire dynamique
 * @see initialiser, le conteneur d'items a déjà été alloué 
 * @param[out] c : le conteneur d'items
 */
void detruire(ConteneurTDE& c) {
	delete [] c.tab;
	c.tab = NULL;
}

/**
 * @brief Lecture d'un item d'un conteneur d'items
 * @param[in] c : le conteneur d'items
 * @param[in] i : la position de l'item dans le conteneur
 * @return l'item à la position i
 * @pre i < c.capacite   
 */
 Item lire(const ConteneurTDE& c, unsigned int i) {
	assert(i < c.capacite);
	return c.tab[i];
}

/**
 * @brief Ecrire un item dans un conteneur d'items
 * @param[in,out] c : le conteneur d'items
 * @param[in] i : la position où ajouter/modifier l'item
 * @param[in] it : l'item à écrire 
 */
void ecrire(ConteneurTDE& c, unsigned int i, const Item& it) {
	if (i>=c.capacite) {
		/* Stratégie de réallocation proportionnelle au pas d'extension :
		 * initialisez la nouvelle taille du conteneur (newTaille) 
		 * à i * c.pasExtension */
		unsigned int newTaille = (i+1) * c.pasExtension;
		/* Allouez en mémoire dynamique un nouveau tableau (newT) 
		 * à cette nouvelle taille*/
		Item* newT = new Item[newTaille];
		/* Recopiez les items déjà stockés dans le conteneur */
    	for (unsigned int i = 0; i < c.capacite; ++i)
      		newT[i] = c.tab[i];
      	/* Désallouez l'ancien tableau support du conteneur */
    	delete [] c.tab;
    	/* Actualiser la mise à jour du conteneur en mémoire dynamique
    	 * Faites pointer le tableau support du conteneur 
    	 * sur le nouveau tableau en mémoire dynamique */
    	c.tab = newT;
    	/* Actualisez la taille du conteneur */
    	c.capacite = newTaille;
    		/* Affichage pour une trace de l'allocation en TP
	 	* En TP, pour tracer l'extension de l'allocation en mémoire,
	 	* affichez les informations qui suivent.
	 	* Cet affichage sera supprimé après le test du conteneur */	
		cout << "Extension - Allocaton/Réallocation de " << newTaille*sizeof(Item) 
		 << " octets (" << newTaille << " items)." << endl;
	}
	/* Ecriture de l'item (it) à la position i dans le conteneur */
	c.tab[i] = it;
}

/* Test d'un conteneur (de type ConteneurTDE) de dates */ 
int main() {
	ConteneurTDE cDates; // Déclaration du conteneur de dates testé
	Date d;
	unsigned int nbDates=0; // Nombre de dates enregistrées dans cDates
	
	/* Initialisation du conteneur avec capacité=2 et pasExtension=0 */
	initialiser(cDates, 2 , 2);
	
	/* Remplir le conteneur de dates 
	 * jusqu'à la saisie d'une date d'année 0 (non enregistrée) 
	 * Mettre à jour nbDates, le nombre de dates saisies*/	
	unsigned int i = 0;
	cout << "Saisir des dates jusqu'à la saisie d'une année nulle" << endl;  
	cout << "Les dates (à l'exception de celle de l'année nulle)" << endl;
	cout << "seront enregistrées dans le conteneur dynamique" << endl;
	do {
		d = saisir();
		if (d.annee != 0) {
			ecrire(cDates, i++, d);
			nbDates++;
		}
	} while (d.annee!=0);
	
	/* Afficher la capacité du conteneur de dates */	
	cout << "Capacité du conteneur dynamique : ";
	cout << cDates.capacite << endl;
	
	/* Afficher le conteneur de dates */
	cout << "Conteneur alloué en mémoire dynamique de " << nbDates 
		 << " date(s)" << endl;
	for (unsigned int i = 0; i < nbDates; ++i) {
		d = lire(cDates, i);
		afficher(d);
	}
	
	/* Désallouer le conteneur de dates */
	detruire(cDates);
	
	return 0;
}
