#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double x = 0,
		   n[100];
	int i = 0,
		j = 0;
	
	scanf("%lf", &x);
	n[0] = x;
	
	for(i = 1, j = 0; i < 100; i++, j++){
		n[i] = n[j] / 2;		
	}
	
	for(i = 0; i < 100; i++){
		printf("N[%d] = %.4f\n", i, n[i]);
	}
	
	return 0;
	
}
