#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double n[6];
	int i = 0,
		cont = 0;
	
	for (i = 0; i < 6; i++){
		scanf("%lf", &n[i]);
		if (n[i] > 0){
			cont = cont + 1;
		}
	}
	
	printf("%d valores positivos\n", cont);
	
	return 0;
	
}
