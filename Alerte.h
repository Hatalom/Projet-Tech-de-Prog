#ifndef ALERTE_H
#define ALERTE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//type d'alerte
#define INCENDIE 1
#define ACCIDENT_ROUTE 2
#define ACCIDENT_MER 3
#define ACCIDENT_MONTAGNE 4
#define MALAISE 5
#define EXPLOSION 6
#define ACCIDENT_DE_LA_VIE 7
#define ATTENTAT 8
//gravité de l'alerte
#define NOMINAL 10
#define URGENT_VRAI 11
#define URGENCE_ABSOLUE 12
//lieu de l'alerte
#define LIEU 50
//nombre de victime de l'alerte
#define VICTIME 20
//description de l'alerte
#define DESCRIPTION 50

/*-----------------------------------------------------------------*/

//implémentation des structures du type Alerte
typedef int TYPE_ALERTE;
typedef int GRAVITE_ALERTE;
typedef char LIEU_ALERTE;
typedef int VICTIME_ALERTE;
typedef char DESCRIPTION_ALERTE;
typedef struct {
	TYPE_ALERTE iTypeAlerte;
	GRAVITE_ALERTE iGravite;
	LIEU_ALERTE * sLieu[LIEU];
	VICTIME_ALERTE iVictime;
	DESCRIPTION_ALERTE * sDescription[DESCRIPTION];
} Alerte;


void ajoutAlerte();
void affichageAlerte();
void affichageAlertes();
void modifierAlerte();
void suppressionAlerte();

//opérateur de sortie et d'entrée
//os{}

//is{}
#endif