#include <stdio.h>
#include "Alerte.h"
#include <stdlib.h>
//#include "Unite.h"
//#include "Gestion.h"

/*-----------------------------------------------------------------*/

//fonction du menu
int menu()
{
	int choix;
	printf("---Menu---\n\n");
	printf("1.Menu des alertes\n");
	printf("2.Menu des unités\n");
	printf("3.Menu de gestion\n");
	printf("9.Quitter\n");
	scanf("%d%*c", &choix);
	return choix;
}

//fonction qui appelle les menus
int appelMenus()
{
	int a;
	a = menu();
	switch (a)
	{
		case 1:
				fonctionAlerte(); //fonction qui appel le menu des alertes
				break;
		case 2:
				//fonctionUnite(); //fonction qui appel le menu des unités MENU UNITE PAS ENCORE CREE 
				break;
		case 3:
				//fonctionGestion(); //fonction qui appel le menu de gestion MENU GESTION PAS ENCORE CREE
				break;
		case 9:
				break;
		default:
				printf("\nVous n'avez fait aucun choix valide\n");
				break;
	}
}

int main(int argc, char *argv[])
{
	appelMenus();
}