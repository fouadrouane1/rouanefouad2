#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float km=1,mile=1,metre=1;
       printf("entrer le distance mile en m \n");
       scanf("%d",&metre);
       //km*1.609
       km=metre*1000;
       mile=km*1.609;
    
       
       
       
       printf("la distance metre en mile est %f");
	return 0;
}
