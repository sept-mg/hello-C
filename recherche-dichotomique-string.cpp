#include <iostream>
#include <cstring>
using namespace std;


// Fonction de recherche dichotomique
int rechercheDichotomique(char tableau[][50], int taille, char recherche[]) {
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = (debut + fin) / 2;

        // Comparer la chaîne recherchée avec l'élément au milieu
        int comparaison = strcmp(tableau[milieu], recherche);

        // Si la chaîne recherchée est égale à l'élément au milieu
        if (comparaison == 0) {
            return milieu; // Retourner l'indice si trouvé
        }

        // Si la chaîne recherchée est plus petite, chercher à gauche
        if (comparaison > 0) {
            fin = milieu - 1;
        }

        // Sinon, chercher à droite
        else {
            debut = milieu + 1;
        }
    }

    return -1; // Retourner -1 si la chaîne n'est pas trouvée
}

int main() {
    // Exemple d'utilisation
    char tableau[][50] = {"apple", "banana", "cherry", "date", "grape", "kiwi", "orange", "pear"};

    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Afficher le tableau trié
    cout << "Tableau trié : ";
    for (int i = 0; i < taille; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    // Effectuer la recherche dichotomique
    char recherche[50];
    cout << "Entrez la chaîne à rechercher : ";
    cin >> recherche;

    int resultat = rechercheDichotomique(tableau, taille, recherche);

    // Afficher le résultat de la recherche
    if (resultat != -1) {
        cout << "La chaîne \"" << recherche << "\" a été trouvée à l'indice "<< resultat << endl;
    } else {
        cout << "La chaîne \"" << recherche << "\" n'a pas été trouvée dans le tableau." << endl;
    }

    return 0;
}
