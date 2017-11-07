#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double s = 0;
	int i = 0;
	
	for(i = 1; i <= 100; i++){
		s = s + (1 / (double)i);
	}
	
	printf("%.2f\n", s);
	
	return 0;
	
}
