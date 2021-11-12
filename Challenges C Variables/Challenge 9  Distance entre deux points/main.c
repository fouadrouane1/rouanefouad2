#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x1,x2,y1,y2,MN;
	
	
	printf("entrer la valeur de x1:");
	scanf("%f",&x1);
	printf("entrer la valeur de x2:");
	scanf("%f",&x2);
	printf("entrer la valeur de y1:");
	scanf("%f",&y1);
	printf("entrer la valeur de y2:");
	scanf("%f",&y2);
	MN = sqrt(pow(x2-x1,2)+(pow(y1+y2,2)));
	printf("la distance MN est:%f",MN);
	
	
	return 0;
}
