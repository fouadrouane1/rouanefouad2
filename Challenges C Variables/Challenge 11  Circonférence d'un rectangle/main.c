#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float C , longueur , largeur;
	printf("entrer la langueur : ");
	scanf("%f",&longueur);
	printf("entrer largeur : ");
	scanf("%f",&largeur);
	C=  2*(longueur + largeur);
		printf("la circonférence est = %f",C);
	return 0;
}
