struct Adresse{
    const int MAX = 3;
    char prenom[MAX], nom[MAX];
    float numero;
    char rue[MAX];
    unsigned int codePostal;
    char ville[MAX];
}

Adresse lire(istream &is){
    Adresse a;
    is.width(Adresse::MAX);
    is>>a.prenom;
    is.width(Adresse::MAX);
    is>>a.nom;
    is>>a.numero;
    is>>ws; // ignore les whitespaces qui suivent
    is.getline(a.rue, Adresse::MAX);
    is>>a.codePostal;
    is>>ws;
    is.getline(a.ville, Adresse::MAX);
}

void afficher(const Adresse &a){
    cout<<a.prenom<<" "<<
    a.nom<<endl<<
    a.rue<<endl<<
    a.numero<<endl<<
    a.codePostal<<" "<<
    a.ville<<endl;
}


#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream f;
    f.open("adresses.txt");
    if(!f){
        cout<<"problème à l'ouverture du fichier"<<endl;
        return 1;h  
    }
}

for(Adresse a = lire(f); f; a=lire(f)){
    afficher(a);
}