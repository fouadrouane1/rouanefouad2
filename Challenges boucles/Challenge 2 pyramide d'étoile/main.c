#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i , l , e , t ;
	printf ("entrer un nombre :");
	scanf ("%d",&l);
	for (i=1 ; i<=l ; i++)
		{
		for (e=1 ; e<=l-i ; e++){
			printf (" ");
		}
		for (t=1 ; t<=(i*2)-1 ;t++ ){
			printf("*");
		}
		printf ("\n");
	} 
	
	return 0;
}
