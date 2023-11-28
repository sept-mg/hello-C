#include <iostream>
#include <cassert>
using namespace std;

typedef int Item;

/**
 * @brief Affichage d�un entier
 * @param[in] l'argument

*/
void afficher(const Item& arg) {
	cout << arg;
}

/* Conteneur (de capacit� 15) g�n�ralis� � tout type d'item */
struct ConteneurTS {
	enum {CAPACITE = 15}; // Capacit� du conteneur
	Item tab[CAPACITE];	 // Conteneur primaire (tableau statique)
	unsigned int nbItems; // Nombre d'items stock�s
};

/**
 * @brief Initialise � vide un conteneur
 * @param[out] le conteneur
 */
void initialiser(ConteneurTS& c) {
	c.nbItems=0; // aucun �l�ment n�est stock�
}

/**
 * @brief Lecture d'un item dans un conteneur
 * @param[in] c : le conteneur
 * @param[in] i : l'indice de l'item dans le conteneur
 * @return l'item (� l'index i)
 * @pre i < c.nbItems   
 */
Item lire(const ConteneurTS& c, unsigned int i) {
	assert (i < c.nbItems);
	return c.tab[i];
}

/**
 * @brief Ecrire un item dans un conteneur
 * @param[in,out] le conteneur
 * @param[in] l'indice o� ecrire l'item
 * @param[in] l'item � ecrire
 * @pre i <= c.nbItems et c.nbItems < c.capacite  
 */
void ecrire(ConteneurTS& c, unsigned int i, const Item& item) {
assert ((i < c.nbItems) || ((i==c.nbItems) && (c.nbItems < ConteneurTS::CAPACITE)));
	c.tab[i] = item;
	if (i == c.nbItems)
		c.nbItems++;
}

/**
 * @brief Affichage des elements du conteneur
 * @param[in] le conteneur
 */
void afficher(const ConteneurTS& c) {
	cout <<"[ ";
	for (unsigned int i=0; i < c.nbItems; ++i) { 
		afficher(c.tab[i]); 
		cout << " ";
	}
	cout << "]" << endl;
}

int main () {
	ConteneurTS c;
	initialiser(c);
	for (int i=0; i<5; ++i) {
		ecrire(c, i, i+1);
	}
	afficher(c);

	assert(lire(c, 0)==1);
	assert(lire(c, 4)==5);
	ecrire (c, 0, 10);
	assert(lire(c, 0)==10);
	ecrire(c, 5, 11);
	assert(lire(c, 5)==11);	

	system("pause"); return 0;
}

