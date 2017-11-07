#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n[5],
		i = 0,
		par = 0;
		
	for (i = 0; i < 5; i++){
		scanf("%d", &n[i]);
		if (n[i] % 2 == 0){
			par = par + 1;
		}
	}
	
	printf("%d valores pares\n", par);
	
	return 0;
	
}
