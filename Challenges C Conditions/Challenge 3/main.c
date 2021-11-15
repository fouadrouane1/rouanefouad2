#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char car;
	printf ("entrer un lettre : ");
	scanf("%c",&car);
	car = toupper (car);
	switch(car)
		{
		case 'A':
			printf("voyelle");
		break;
		case 'E':
			printf("voyelle");
			break;
		case 'U':
			printf("voyelle");
			break;
		case 'Y':
			printf("voyelle");
			break;
		case 'I':
			printf("voyelle");
			break;
		case 'O':
			printf("voyelle");
			break;
		default:
			printf("pas voyelle");				
		
		
		}
	return 0;
}
