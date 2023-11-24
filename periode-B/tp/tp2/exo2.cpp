#include <iostream>
#include <cassert>
using namespace std;

typedef float Item;

/**
 * @brief Affichage d’un entier
 * @param[in] l'argument

*/
void afficher(const Item& arg) {
	cout << arg;
}

/* Conteneur (de capacité 15) généralisé à tout type d'item */
struct ConteneurTS {
	enum { CAPACITE = 15 }; // Capacité du conteneur
	Item tab[CAPACITE];	 // Conteneur primaire (tableau statique)
	unsigned int nbItems; // Nombre d'items stockés
};

/**
 * @brief Initialise à vide un conteneur
 * @param[out] le conteneur
 */
void initialiser(ConteneurTS& c) {
	c.nbItems = 0; // aucun élément n’est stocké
}

/**
 * @brief Lecture d'un item dans un conteneur
 * @param[in] c : le conteneur
 * @param[in] i : l'indice de l'item dans le conteneur
 * @return l'item (à l'index i)
 * @pre i < c.nbItems
 */
Item lire(const ConteneurTS& c, unsigned int i) {
	assert(i < c.nbItems);
	return c.tab[i];
}

/**
 * @brief Ecrire un item dans un conteneur
 * @param[in,out] le conteneur
 * @param[in] l'indice où ecrire l'item
 * @param[in] l'item à ecrire
 * @pre i <= c.nbItems et c.nbItems < c.capacite
 */
void ecrire(ConteneurTS& c, unsigned int i, const Item& item) {
	assert((i < c.nbItems) || ((i == c.nbItems) && (c.nbItems < ConteneurTS::CAPACITE)));
	c.tab[i] = item;
	if (i == c.nbItems)
		c.nbItems++;
}

/**
 * @brief Affichage des elements du conteneur
 * @param[in] le conteneur
 */
void afficher(const ConteneurTS& c) {
	cout << "[ ";
	for (unsigned int i = 0; i < c.nbItems; ++i) {
		afficher(c.tab[i]);
		cout << " ";
	}
	cout << "]" << endl;
}

/**
* @brief comparer à deux arguments (arg1 et arg2) de type Item
* @param[in] arg1 premier item que l'on va comparer au deuxieme
* @param[in] arg2 deuxieme item qui va permettre la comparaison avec le premier argument
* @return renvoie, un nombre négatif si arg1<arg2, 0 si arg1=arg2, un nombre strictement positif si arg1>arg2.
*/
float comparer(const Item& arg1, const Item& arg2)
{
	return arg1 - arg2;
}

/* permet de culumer les extrema minimum et maximum */
struct Extrema
{
	unsigned int min;
	unsigned int max;
};

/**
* @brief La fonction extrema, indique les extrema du conteneur d’items
* @param[in] le conteneur
* @return deux indexes dans le conteneur r : l’une correspondant à la plus petite valeur des éléments du conteneur, l’autre à la plus grande valeur
*/
Extrema extrema(const ConteneurTS& c)
{
	Extrema ex;
	ex.min = 0;
	ex.max = 0;
	

	for (unsigned int i = 0; i < c.nbItems; i++)
	{
		if (comparer(c.tab[i], c.tab[ex.max]) > 0)
			ex.max = i;

		if (comparer(c.tab[i], c.tab[ex.min]) < 0)
			ex.min = i;
	}

	return ex;
}


int main() {
	ConteneurTS c;
	initialiser(c);
	unsigned int i = 0;
	Item insert;
	while (i < c.CAPACITE)
	{
		cout << "entrer une taille : ";
		cin >> insert;

		if (insert < 0)
			i = c.CAPACITE;
		else
		{
			ecrire(c, i, insert);
			i++;
		}
	}

	Extrema ex = extrema(c);
	cout << "minum : " << lire(c, ex.min) << ", maximum : " << lire(c, ex.max) << endl;

	return 0;
}