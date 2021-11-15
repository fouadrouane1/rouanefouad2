#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nbr1,nbr2, somme;
	printf ("donner un nombre : ");
	scanf("%d",&nbr1);
	printf("donner un nombre : ");
	scanf("%d",&nbr2);
	somme = nbr1 + nbr2;
	if (nbr1 == nbr2){
		printf("triple de leur somme %d :",somme*3);
	}else{
		printf("la somme %d :",nbr1+nbr2);
	}
	return 0;
}
