#include <iostream>
#include <cstring>
using namespace std;

struct Personne
{
    char * nom;
    int age;
};

void initialiser (Personne* t[], unsigned int n)
{
    for (; n; n--)
    {
        t[n-1] = 0; // on met 0 car in veut pointer sur rien, alors la case mémoire 0 exists mais n'est pas utilisable
    }
    
}

void ajouter(Personne **t, unsigned int n)
{
    unsigned int i;
    cout << "ajouter a l'emplacement :";
    cin >> i;
    if(i >= n || t[i] != 0)
    {
        cerr << "bla bla"; //cerr = cout pour les erreurs
    }
    else
    {
        const int MAX = 50;
        char buffer[MAX];
        cout << "entrer nom : ";
        cin >> buffer;
        t[i] = new Personne;
        t[i]->nom = new char[strlen(buffer) + 1]; //mettre pile la bonne taille
        strcpy(t[i]->nom, buffer);
        cout << "entrer son age : ";
        cin >> t[i]-> age;
    }
}

void afficher(const Personne* const * t, unsigned int taille)
{
    unsigned int i;
    for(i = 0; i < taille; ++i)
    {
        cout << '[' << i << "] ";
        if(t[i])
        {
           cout << t[i]->nom << " : " << t[i]->age << " an(s)"; 
        }
        else
            cout << "vide";
        cout << endl;
    }
}

void supprimer(Personne **t, unsigned int n)
{
    unsigned int i;
    cout << "enplacement";
    cin >> i;
    if(i >= n || !t[i])
    {
        cerr << "index erreur";
    }
    else
    {
        delete[] t[i]->nom;
        delete[] t[i];
        t[i] = 0;
    }
}

int main()
{
    const unsigned int MAX_PERSONNES = 5;
    //declarer un tableau de MAX_PERSONNES
    //pointers de Personne
    Personne* personnes[MAX_PERSONNES];

    initialiser(personnes, MAX_PERSONNES);

    return 0;
}