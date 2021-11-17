#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float F , C ;
	printf("entrer la temperature de F : ");
	scanf("%f",&F);
	C = (F-32)/1.8;
	if (F<0){
		printf("tres froid");
	}else if (F<15){
		printf("froid");
	}else if (F<30){
		printf("chaud");
	}else{
		printf("tres chaud");
	}
	return 0;
}
