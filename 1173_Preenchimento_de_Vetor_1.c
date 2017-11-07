#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n[10],
		v = 0,
		i = 0;
	
	scanf("%d", &v);
	
	for (i = 0; i < 10; i++){
		n[i] = v;
		v = v * 2;
	}
	
	for (i = 0; i < 10; i++){
		printf("N[%d] = %d\n", i, n[i]);
	}
	
	return 0;
	
}
