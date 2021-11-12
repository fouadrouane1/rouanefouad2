#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d,somme,moyenne;
	printf("entrer la valeur a");
	scanf("%d",&a);
	printf("entrer la valeur b");
	scanf("%d",&b);
	printf("entrer la valeur c");
	scanf("%d",&c);
	printf("entrer la valeur d");
	scanf("%d",&d);
	somme=(a+b+c+d);
	printf("somme=%d",somme);
	moyenne=(somme)/4;
	printf("moyenne=%d",moyenne);
	
	
	return 0;
}
