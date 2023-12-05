#pragma once
#ifndef _CONTENEURTDE_
#define _CONTENEURTDE_

#include "Item.h"

/** @brief Conteneur d'items allou�s en m�moire dynamique
 *  de capacit� extensible suivant un pas d'extension
 */ 
struct ConteneurTDE {
    unsigned int capacite; 	   // capacit� du conteneur (>0)
	unsigned int pasExtension; // pas d'extension du conteneur (>0)
	Item* tab;				   // conteneur allou� en m�moire dynamique
};

void initialiser(ConteneurTDE& t, unsigned int c, unsigned int p);
void detruire(ConteneurTDE& t);
Item lire(const ConteneurTDE& t, unsigned int i); 
void ecrire(ConteneurTDE& t, unsigned int i, const Item& it);
#endif
