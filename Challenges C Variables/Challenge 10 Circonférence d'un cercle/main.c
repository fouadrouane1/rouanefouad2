#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float R,C;
	const Pi = 3.14;
	printf("entrer la circonférence de R :");
	scanf("%.2f",&R);
	C = 2*Pi*R;
	printf("afficher la circonférence de R %.2f ",C);
	return 0;
}

