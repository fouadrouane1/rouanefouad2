#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int abc = 234 , v;
	v = abc%10;
	printf("%d", v);
	abc=abc /10;
	v = abc %10;
	printf("%d", v);
	abc =abc /10;
	v=abc%10;
	
	printf("%d", v);
	
	return 0;
}
