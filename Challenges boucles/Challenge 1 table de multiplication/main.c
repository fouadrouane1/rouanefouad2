#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i , x;
		printf("entrer un nombre : ");
		scanf ("%d",&x);
		
		for (i=1; i<=10; i++){
		int v=x*i;
			printf("%d * %d =%d\n",x,i,v);
	
	}
	return 0;
}
