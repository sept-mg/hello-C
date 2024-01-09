#include <iostream>

using namespace std;

int repartition(int t[], int d, int f);

void triRec(int t[], int d, int f)
{
    if (d < f)
    {
        int p = repartition(t, d, f);
        triRec(t, d, p-1);
        triRec(t, p + 1, f);
    }
    
}

void tri(int t[], int n)
{
    triRec(t, 0, n-1);
}

void tri2(int t[], int n)
{
    Pile pile;
    initialisee(pile);
    empiler(pile, [0, n-1]);
    while (!estvide(pile))
    {
        Paire paire = sommet(pile);
        depiler(pile);
        if(debut(paire) < fin(paire)) {
            int p = repartition(t[], debut(paire), fin(paire));
            empiler(pile, [debut(paire), p-1]);
            empiler(pile, [p + 1, fin(paire)]);
        }
    }
    detruire(pile);
}

void tri3(int t[], int n)
{
    Pile pile;
    initialisee(pile);
    empiler(pile, [0, n-1]);
    while (!estvide(pile))
    {
        Paire paire = sommet(pile);
        depiler(pile);
        if(debut(paire) < fin(paire)) {
            int p = repartition(t[], debut(paire), fin(paire));
            if (fin(paire) - p < p - debut(paire)) {
                empiler(pile, [debut(paire), p-1]);
                empiler(pile, [p + 1, fin(paire)]);
            } else {
                empiler(pile, [p + 1, fin(paire)]);
                empiler(pile, [debut(paire), p-1]);
            }
        }
    }
    detruire(pile);
}

int main()
{
    int n = 10000;
    int tab[n] = {...};
    tri(tab, n);
}
