#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double s = 0;
	int i = 0,
		j = 0,
		pot = 0;
	
	for(i = 1, j = 0; i <= 39; i += 2, j++){
		pot = pow(2,j);
		s = s + (i / (double)pot);
	}
	
	printf("%.2f\n", s);
	
	return 0;
	
}
