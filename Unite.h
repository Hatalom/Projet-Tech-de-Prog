#ifndef UNITE_H
#define UNITE_H
#include <stdio.h>
#include <string.h>

//identification de l'unité de secours
#define CODE_UNITE 10
#define NOM 20
//moyen de déplacement de l'unité
#define ROUTE 1
#define AIR 2
#define MER 3
//niveau de disponibilité
#define ACTIVE 1
#define EN_REPOS 2
#define EN_REAPPROVISIONNEMENT 3
//un statut
#define EN_UNITE 1
#define EN_ROUTE 2
#define SUR_OPERATION 3
//une base
#define BASE 20
//nombre max d'unitées
//#define TAILLE 20
//#define TAILLE_UNITE 

/*-----------------------------------------------------------------*/
//implémentation des structures du type Unite

typedef struct {
	short iCode;
	char * sNom[NOM];
} Identification;

typedef struct cell_unite {
	Identification iId;
	int iMoyenDeplacement;
	int iDisponibilite;
	int iStatut;
	char * sBase[BASE];
	struct cell_unite * suiv;
} Cellules_unite;

typedef Cellules_unite * Unite;

void creerUnite(Unite ** unite, Identification iId, int iMoyenDeplacement, int iDisponibilite, int iStatut, char * sBase);
void affichageUnite(Unite * unite);
void affichageUnites(Unite * unite); //deux solutions dsous forme de tableau avec char ou sinon avec des listes chainées!!
void modificationUnite(Unite ** unite);
void suppressionUnite(Unite ** unite);

#endif