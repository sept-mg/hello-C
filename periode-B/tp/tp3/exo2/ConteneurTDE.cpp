/**
 * @file ConteneurTDE.cpp
 * Projet sem03-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 2 18/11/11
 * @brief corrige du TD n�3 sur machine - Exercice 2
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */

#include <iostream>
#include <cassert>
using namespace std;

/**
 * @brief Structure de donn�es de type Date
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
 * @param[in] d : la date � afficher
 */
void afficher(const Date& d) {
	cout << d.jour << '/' << d.mois << '/' << d.annee << "  ";
}

// Sp�cialisation du type Item (l'item est sp�cialis� ici en date)
typedef Date Item;

/** @brief Conteneur d'items allou�s en m�moire dynamique
 *  de capacit� extensible suivant un pas d'extension
 */ 
struct ConteneurTDE {
    unsigned int capacite; 	   // capacit� du conteneur (>0)
	unsigned int pasExtension; // pas d'extension du conteneur (>0)
	Item* tab;		   // conteneur allou� en m�moire dynamique
};

void initialiser(ConteneurTDE& t, unsigned int c, unsigned int p);
void detruire(ConteneurTDE& t);
Item lire(const ConteneurTDE& t, unsigned int i); 
void ecrire(ConteneurTDE& t, unsigned int i, const Item& it);

/**
 * @brief Initialise un conteneur d'items
 * Allocation en m�moire dynamique du conteneur d'items
 * de capacit� (capa) extensible par pas d'extension (p)
 * @see detruire, pour sa d�sallocation en fin d'utilisation 
 * @param[out] c : le conteneur d'items
 * @param [in] capa : capacit� du conteneur
 * @param [in] p : pas d'extension de capacit�
 * @pre capa>0 et p>0
 */
void initialiser(ConteneurTDE& c, unsigned int capa, unsigned int p) {
	assert(capa);
	assert(p);
	c.capacite = capa;
	c.tab = new Item[capa];
	c.pasExtension = p;
	/* Affichage pour une trace de l'allocation en TP
	 * Affichage � supprimer apr�s le test du conteneur */	
	cout << "Allocation initiale de " << capa*sizeof(Item) << " octets ("
		 << capa << " item(s))" << endl;
	
}

/**
 * @brief D�salloue un conteneur d'items en m�moire dynamique
 * @see initialiser, le conteneur d'items a d�j� �t� allou� 
 * @param[out] c : le conteneur d'items
 */
void detruire(ConteneurTDE& c) {
	delete[] c.tab;
}

/**
 * @brief Lecture d'un item d'un conteneur d'items
 * @param[in] c : le conteneur d'items
 * @param[in] i : la position de l'item dans le conteneur
 * @return l'item � la position i
 * @pre i < c.capacite   
 */
 Item lire(const ConteneurTDE& c, unsigned int i) {
	assert(i < c.capacite);
	return c.tab[i];
}

/**
 * @brief Ecrire un item dans un conteneur d'items
 * @param[in,out] c : le conteneur d'items
 * @param[in] i : la position o� ajouter/modifier l'item
 * @param[in] it : l'item � �crire 
 */
void ecrire(ConteneurTDE& c, unsigned int i, const Item& it) {
	if (i>=c.capacite) {
		/* Strat�gie de r�allocation proportionnelle au pas d'extension :
		 * initialisez la nouvelle taille du conteneur (newTaille) 
		 * � (i+1) * c.pasExtension */
		unsigned int newTaille = (i+1) * c.pasExtension;
		/* Allouez en m�moire dynamique un nouveau tableau (newT) 
		 * � cette nouvelle taille*/
		Item* newT = new Item[newTaille];
		/* Recopiez les items d�j� stock�s dans le conteneur */
    	for (unsigned int j = 0; j < c.capacite; j++)
		{
			newT[j] = c.tab[j];
		}
		
      	/* D�sallouez l'ancien tableau support du conteneur */
    	detruire(c);
    	/* Actualiser la mise � jour du conteneur en m�moire dynamique
    	 * Faites pointer le tableau support du conteneur 
    	 * sur le nouveau tableau en m�moire dynamique */
    	c.tab = newT;
    	/* Actualisez la taille du conteneur */
    	c.capacite = newTaille;
    	/* Affichage pour une trace de l'allocation en TP
	 	 * En TP, pour tracer l'extension de l'allocation en m�moire,
	 	 * affichez les informations qui suivent.
	 	 * Cet affichage sera supprim� apr�s le test du conteneur */	
		cout << "Extension - Allocaton/R�allocation de " << newTaille*sizeof(Item) 
		 << " octets (" << newTaille << " items)." << endl;
	}
	/* Ecriture de l'item (it) � la position i dans le conteneur */
	c.tab[i] = it;
}

/* Test d'un conteneur (de type ConteneurTDE) de dates */ 
int main() {
	ConteneurTDE cDates; // D�claration du conteneur de dates test�
	Date d;
	unsigned int nbDates=0; // Nombre de dates enregistr�es dans cDates
	
	/* Initialisation du conteneur avec capacit�=1 et pasExtension=2 */
	initialiser(cDates, 1 , 2);
	
	/* Remplir le conteneur de dates 
	 * jusqu'� la saisie d'une date d'ann�e 0 (non enregistr�e) 
	 * Mettre � jour nbDates, le nombre de dates saisies*/	
	unsigned int i = 0;
	cout << "Saisir des dates jusqu'� la saisie d'une ann�e nulle" << endl;  
	cout << "Les dates (� l'exception de celle de l'ann�e nulle)" << endl;
	cout << "seront enregistr�es dans le conteneur dynamique" << endl;
	Date d = saisir();
	while (d.annee > 0)
	{
		ecrire(cDates, i, d);
		i++;
		d = saisir();
	}
	
	
	
	/* Afficher la capacit� du conteneur de dates */	
	cout << "Capacit� du conteneur dynamique : ";
	cout << cDates.capacite << endl;
	
	/* Afficher le conteneur de dates */
	cout << "Conteneur allou� en m�moire dynamique de " << nbDates 
		 << " date(s)" << endl;
	for (unsigned int i = 0; i < nbDates; i++)
	{
		afficher(lire(cDates, i));
	}
	
	
	/* D�sallouer le conteneur de dates */
	detruire(cDates);
	
	return 0;
}
