#include "Alerte.h"
#include <stdio.h>
#include <string.h>

/*-----------------------------------------------------------------*/
 
//ajout d'une alerte
void ajoutAlerte(Alerte ** alerte, int iTypeAlerte, int iGravite, char * sLieu[LIEU], int iVictime, char * sDescription[DESCRIPTION])
{
	if (*alerte != NULL)
	{
	perror ("ERREUR PROG - Pointeur sur alerte non NULL");
	return -1;
	}
	/*Allocation memoire*/
	*alerte = malloc (sizeof(Alerte));
	if (*alerte==NULL)
	{
		perror ("ERREUR PROG - Pointeur sur alerte NULL apres allocation");
		return(-1);
	}
	return 0;
}

//affichage de l'alerte
void affichageAlerte(Alerte * alerte)
{}

//affichage de toutes les alertes
void affichageAlertes(Alerte * alerte)
{}

//modifaction d'une alerte
void modificationAlerte(Alerte ** alerte)
{}

//suppression d'une alerte
void suppressionAlerte(Alerte ** alerte)
{}

//opérateur de sortie et d'entrée
//os{}

//is{}
