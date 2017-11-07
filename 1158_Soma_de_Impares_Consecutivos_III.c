#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		x = 0,
		y = 0,
		i = 0,
		soma = 0;
		
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %d", &x, &y);
		while(y != 0){
			if(x % 2 != 0){
				soma = soma + x;
				y--;
			}
			x++;
		}
		printf("%d\n", soma);
		soma = 0;			
	}
	
	return 0;
	
}
