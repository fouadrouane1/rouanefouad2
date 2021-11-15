#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nombre;
	printf("entrer un nombre :");
	scanf("%d",&nombre);
	if (nombre%2==0){
		printf("paire");
	}else if(nombre%2!=0){
		printf("impaire");
	}
	
	return 0;
}
