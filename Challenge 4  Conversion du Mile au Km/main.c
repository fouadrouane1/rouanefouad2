#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float Mile=2, Km=1, M=1;
	
	printf("le distance en mile et la trasf en metre");
	
	scanf("%f",&Mile);
	
	Km=Mile/1.609;
	
	M=Km/1000;
	
	printf("%f",M);
	return 0;
}
