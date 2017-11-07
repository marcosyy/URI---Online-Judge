#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t = 0,
		i = 0,
		x = 0,
		k = 1,
		cont = 0;
				
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d", &x);
		while(k <= x){
			if(x % k == 0){
				cont++;
			}
			k++;
		}
		if(cont == 2){
			printf("%d eh primo\n", x);
		}
		else{
			printf("%d nao eh primo\n", x);
		}
		cont = 0;
		k = 1;
	}
	
	return 0;
	
}
