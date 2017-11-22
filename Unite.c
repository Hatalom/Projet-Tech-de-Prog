#include "Unite.h"
#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------------*/

//ajout d'une Unite
void creerUnite(Unite ** unite, Identification iId, int iMoyenDeplacement, int iDisponibilite, int iStatut, char * sBase)
{}

//affichage de l'Unite
void affichageUnite(Unite * unite)
{}

//affichage de toutes les Unites
void affichageUnites(Unite * unite)
{
    if (unite == NULL)
    {
        exit(EXIT_FAILURE);
    }
    cell_unite *actuel = unite->suiv;
    while (actuel != NULL)
    {
    	printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

//modifaction d'une Unite
void modificationUnite(Unite ** unite)
{}

//suppression d'une Unite
void suppressionUnite(Unite ** unite)
{}

//opérateur de sortie et d'entrée
//os{}

//is{}