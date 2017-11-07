#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double n1 = 0;
	
	scanf("%lf", &n1);
	
	if ((n1 < 0) || (n1 > 100.0000)){
		printf("Fora de intervalo\n");		
	}
	else{
		if ((n1 >= 0) && (n1 <= 25.0000)){
			printf("Intervalo [0,25]\n");
		}
		if ((n1 > 25.0000) && (n1 <= 50.0000)){
			printf("Intervalo (25,50]\n");
		}
		if ((n1 > 50.0000) && (n1 <= 75.0000)){
			printf("Intervalo (50,75]\n");
		}
		if ((n1 > 75.0000) && (n1 <= 100.0000)){
			printf("Intervalo (75,100]\n");
		}
	}
	
	return 0;
	
}
