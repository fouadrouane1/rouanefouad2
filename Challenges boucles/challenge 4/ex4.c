#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nbr1, inverse=0, reste;
	printf("entrer un nombre : ");
	scanf ("%d",&nbr1);
	while (nbr1 != 0)
	{
		reste=nbr1% 10;
		inverse =10*inverse +reste;
		nbr1= nbr1/10;
		
	}
		printf ("le resultat est : %d",inverse);
	

	return 0;
}
