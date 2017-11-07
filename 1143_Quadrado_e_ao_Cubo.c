#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int i = 0,
		k = 1,
		n = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("%d %d %d\n", k, k * k, k * k * k);
		k++;
	}
	
	return 0;
	
}
