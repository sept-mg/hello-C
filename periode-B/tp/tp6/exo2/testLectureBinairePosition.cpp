/**
 * @file testLectureBinairePosition.cpp
 * Projet sem05-tp-Cpp2
 * @author l'�quipe p�dagogique 
 * @version 1 22/12/05
 * @brief corrige du TD n�5 sur machine - Exercice 2
 * Structures de donn�es et algorithmes - DUT1 Paris 5
 */
 
// Compl�tez les inclusions ....................................................


/* Test d'une s�rialisation dans un flot binaire d'items de type Position */ 
int main() {
	Position p;
	// D�clarez le flot fL d'entr�e ............................................

	int nPos; 		// Nombre d'items du fichier
	char nomF[80];
	
	/* Ouverture d'un flot binaire en lecture */
	cout << "Saisir le nom du fichier binaire � relire : ";
	cin >> nomF;
	// Compl�tez l'ouverture de fE et son assignation au fichier de nom (nomF)
    // .........................................................................

 
 	if (fL.fail()) {
		cerr << "Impossible de lire le fichier\n";
		exit(1);
	}  
	 
    // Calculez du nombre d'items (nPos) de type Position dans le fichier ......


    cout << "Le fichier contient " << nPos << " �l�ments de type Position :\n";
    
    // Positionnez-vous en d�but de flot/fichier ...............................

	
    // Affichez toutes les positions enregistr�es dans le fichier ..............

	
	cout << "\nFin de lecture du fichier binaire." << endl;
	
	// Fermez le flot binaire ..................................................

}
