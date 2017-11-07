#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0,
		k = 0,
		cont = 0,
		cont2 = 0;
		
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d", &k);
		if (k >= 10 && k <= 20){
			cont = cont + 1;
		}
		else{
			cont2 = cont2 + 1;
		}		
	}
	
	printf("%d in\n", cont);
	printf("%d out\n", cont2);
	
	return 0;
	
}
