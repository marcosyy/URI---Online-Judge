#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t = 0,
		i = 0,
		k = 1,
		x = 0,
		perfect = 0;
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d", &x);
		while(k < x){
			if(x % k == 0){
				perfect += k;
			}
			k++;
		}
		if(perfect == x){
			printf("%d eh perfeito\n", x);
		}
		else{
			printf("%d nao eh perfeito\n", x);
		}
		k = 1;
		perfect = 0;
	}
	
	return 0;
		
}
