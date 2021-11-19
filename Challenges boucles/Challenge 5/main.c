#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int somme (int a , int b){
	
	
	int	S = a+b;
	return S;
	}
int main(int argc, char *argv[]) {
	int a, b;
	printf ("entrer la vleur de a :"); 
	scanf("%d",&a);
	printf ("entrer la vleur de b :"); 
	scanf("%d",&b);
	
	printf ("resultat est : %d",somme(a,b));
	return 0;
}
