#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0;
		
	scanf("%d", &n);
	
	for (i = 1; i < 11; i++){
		printf("%i x %d = %d\n", i, n, i * n);
	}
	
	return 0;
	
}

