/**
 * @file testLectureBinairePosition.cpp
 * Projet sem05-tp-Cpp2
 * @author l'équipe pédagogique 
 * @version 1 22/12/05
 * @brief corrige du TD n°5 sur machine - Exercice 2
 * Structures de données et algorithmes - DUT1 Paris 5
 */
 
// Complétez les inclusions ....................................................


/* Test d'une sérialisation dans un flot binaire d'items de type Position */ 
int main() {
	Position p;
	// Déclarez le flot fL d'entrée ............................................

	int nPos; 		// Nombre d'items du fichier
	char nomF[80];
	
	/* Ouverture d'un flot binaire en lecture */
	cout << "Saisir le nom du fichier binaire à relire : ";
	cin >> nomF;
	// Complétez l'ouverture de fE et son assignation au fichier de nom (nomF)
    // .........................................................................

 
 	if (fL.fail()) {
		cerr << "Impossible de lire le fichier\n";
		exit(1);
	}  
	 
    // Calculez du nombre d'items (nPos) de type Position dans le fichier ......


    cout << "Le fichier contient " << nPos << " éléments de type Position :\n";
    
    // Positionnez-vous en début de flot/fichier ...............................

	
    // Affichez toutes les positions enregistrées dans le fichier ..............

	
	cout << "\nFin de lecture du fichier binaire." << endl;
	
	// Fermez le flot binaire ..................................................

}
