#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float f,c;
	printf("entrer la temperature en CELSIUS");
	scanf("%f",&c);
    //F=(C*1.8)+32
    c=(f-32)/1.8;
    printf("la temperature en Fahrenheit est %f",f);
	return 0;
}
