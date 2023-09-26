#include <stdio.h>

typedef enum {
    TREFLE,
    CARREAU,
    COEUR,
    PIQUE
} Couleur;

typedef enum {
    SEPT = 7,
    HUIT,
    NEUF,
    DIX,
    VALET,
    DAME,
    ROI,
    AS
} Valeur;

//exo2 
typedef struct {
    Couleur couleur;
    Valeur valeur;
} Carte;

int main() {
    //exo3
    enum {
        nbValeurs = AS - SEPT + 1,
        nbCouleurs = sizeof(Couleur), //4
        NB_CARTES = nbCouleurs * nbValeurs

        //ou directement
        //NB_CARTES = 32
    };

    Carte paquet[NB_CARTES];

    int index = 0;

    for (Couleur couleur = TREFLE; couleur <= PIQUE; couleur++) {
        for (Valeur valeur = SEPT; valeur <= AS; valeur++) {
            paquet[index].couleur = couleur;
            paquet[index].valeur = valeur;
            index++;
        }
    }


    //exo4
    for (int i = 0; i < NB_CARTES - 1; i++) {
        int p = alea(i, NB_CARTES - 1); // Choisir une position au hasard
        Carte temp = paquet[i];
        paquet[i] = paquet[p];
        paquet[p] = temp;
    }

    
    //exo5
    for (int i = 0; i < NB_CARTES; i++) {
        switch (paquet[i].valeur)
        {
        case 11:
            printf("Valet de ");
            break;
        case 12:
            printf("Dame de ");
            break;
        case 13:
            printf("Roi de ");
            break;
        case 14:
            printf("As de ");
            break;
        default:
            printf("%d de ", paquet[i].valeur);
            break;
        }

        switch (paquet[i].couleur)
        {
        case 0:
            printf("Trèfle\n");
            break;
        case 1:
            printf("Carreau\n");
            break;
        case 2:
            printf("Coeur\n");
            break;
        case 3:
            printf("Pique\n");
            break;
        default:
            break;
        }
    }

    return 0;
}