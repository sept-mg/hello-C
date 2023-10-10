#include <stdio.h>
#include <ctype.h> // pour la fonction tolower
#include <assert.h>

#pragma warning(disable: 4996 6031)

// Constante et type utilitaires
// ESP : espace, MUR : mur
typedef enum { ESP, MUR } Cellule;

// Hauteur et largeur du terrain de jeu (il est carr�).
enum { TAILLE = 4 };

// Le terrain doit �tre initialis� conform�ment � la valeur de TAILLE.
const Cellule TERRAIN[TAILLE][TAILLE] = {
	{ESP, ESP, ESP, ESP},
	{ESP, MUR, ESP, MUR},
	{ESP, ESP, MUR, ESP},
	{MUR, ESP, ESP, ESP}
};

// Directions possibles : haut, bas, droite et gauche
// (lettre de chaque direction suivie du d�placement relatif ligne puis colonne).
const int DIR[][3] = { {'h', -1, 0}, {'b', 1, 0}, {'d', 0, 1}, {'g', 0, -1} };
// Nb de directions
const int  NB_DIR = sizeof(DIR) / sizeof(DIR[0]);

// Retourne l'indice dans le tableau dir de la direction correspondante et NB_DIR si elle n'existe pas.
int conversion(char c) {
	for (int i = 0; i < NB_DIR; ++i)
		if (c == DIR[i][0])
			return i;
	return NB_DIR;
}

// Coordonn�e valide (i.e. dans le terrain et cellule non occup�e par un mur) ?
int estValide(int ligne, int colonne);

// Calcule le nombre minimal de d�placements n�cessaires pour aller d'un point � un autre.
int distance(int ligDep, int colDep, int ligArr, int colArr);

int main() {
	// Position courante du joueur initialis�e au point de d�part.
	int ligne = 0, colonne = 0;
	// Cible � atteindre.
	const int LIGNE = TAILLE - 1, COLONNE = TAILLE - 1;
	// Nb minimal de d�placements n�cessaires pour aller du point de d�part � la cible.
	const int MIN_NB_DEP = distance(ligne, colonne, LIGNE, COLONNE);
	// Nb de d�placements du joueur.
	int nbDep = 0;

	printf("vous pouvez gagner en %d deplacements\n", MIN_NB_DEP);
	while (ligne != LIGNE || colonne != COLONNE) {
		printf("Vous etes en (%d, %d) et vous devez aller en (%d, %d)\n", ligne, colonne, LIGNE, COLONNE);
		printf("(h)aut, (b)as, (d)roite, (g)auche ? : ");
		char c;
		scanf("\n%c", &c);
		int d = conversion(tolower(c));
		if (d == NB_DIR)
			printf("direction inconnue\n");
		else {
			int li = ligne + DIR[d][1], co = colonne + DIR[d][2];
			if (estValide(li, co)) {
				ligne = li;
				colonne = co;
				++nbDep;
			}
			else
				printf("il y a un mur\n");
		}
	}
	if (nbDep == MIN_NB_DEP)
		printf("Bravo !!!\n");
	else if (nbDep > MIN_NB_DEP)
		printf("Vous pouvez faire mieux\n");
	else
		printf("Vous etes plus fort que moi !!!\n");
}

// � compl�ter durant les exercices

int estValide(int ligne, int colonne) {
	return ligne >= 0 && ligne < TAILLE && colonne >= 0 && colonne < TAILLE && !TERRAIN[ligne][colonne];
}

///print tableau
void printTab(int tab[TAILLE][TAILLE])
{
	for (int i = 0; i < TAILLE; i++)
	{
		for (int j = 0; j < TAILLE; j++)
		{
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int distance(int ligDep, int colDep, int ligArr, int colArr) {
	int ter[TAILLE][TAILLE];

	for (int i = 0; i < TAILLE; i++)
	{
		for (int j = 0; j < TAILLE; j++)
		{
			ter[i][j] = -1;
		}

	}
	ter[ligDep][colDep] = 0;

	for (int l = 0; l <= ligArr; l++)
	{
		for (int c = 0; c <= colArr; c++)
		{
			for (int i = 0; i < NB_DIR; i++)
			{
				if (ter[l][c] != -1)
				{
					int li = l + DIR[i][1];
					int co = c + DIR[i][2];
					if (estValide(li, co) && (ter[li][co] == -1 || ter[li][co] > ter[l][c] + 1))
						ter[li][co] = ter[l][c] + 1;
				}

			}

		}
	}

	return ter[ligArr][colArr];
}