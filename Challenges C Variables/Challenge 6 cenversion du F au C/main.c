#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float f,c;
	printf("entrer la temperature de f :");
	scanf("%f",&f);
	c=(f-32)/1.8;
	printf ("la tempirature de c = %f ",c);
	return 0;
}
