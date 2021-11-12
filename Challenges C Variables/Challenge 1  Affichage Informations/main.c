#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nom[20];
	char prenom[30];
	int age;
	char tele[30];
	char sexe[10];
	printf("entrer la valeur de nom:");
	scanf("%s",nom);
	printf("entrer le valeur de prenom:");
	scanf("%s",prenom);
	printf("entrer la valeur de age");
	scanf("%d",&age);
	printf("entrer la valeur de numero de tele");
	scanf("%s",tele);
	printf("entrer la valeur de sexe");
	scanf("%s",sexe);
	
	
	//affichage des informations
	
    printf(" NOM: %s \n PRENOM: %s  \n AGE:  %d  \n TELE: %s \n SEXE: %s \n", nom , prenom , age , tele , sexe);
	
	return 0;
}

