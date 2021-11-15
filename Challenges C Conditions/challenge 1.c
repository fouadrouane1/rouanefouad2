#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float F,C;
	
	printf("entrer la valeur de F");
	scanf("%f",&F);
	
	C = (F-32)/1.8;
	
	if (C < 0 ){
		printf("tres froid");
	}else if( C < 15){
		printf("froid");
	}else if (C < 30){
		printf("chaud");
	}else {
		printf("tres chaud");
	}
	
	return 0;
}
