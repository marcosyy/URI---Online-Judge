#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int r = 0;
	double pi = 3.14159,
		   vol = 0;
	
	scanf("%d", &r);
	
	vol = (4/3.0) * pi * pow(r,3);
	
	printf("VOLUME = %.3f\n", vol);
	
	return 0;			   	
}
