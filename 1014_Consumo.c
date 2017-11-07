#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0;
	double y = 0,
		   consumo = 0;
	
	scanf("%d", &x);
	scanf("%lf", &y);
	
	consumo = x / y;
	
	printf("%.3f km/l\n", consumo);
	
	return 0;	
}
