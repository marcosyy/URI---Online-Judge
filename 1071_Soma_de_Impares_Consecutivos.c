#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		y = 0,
		i = 0,
		k = 0,
		soma = 0;
		
	scanf("%d %d", &x, &y);
	
	if (x > y){
		k = x;
		i = y;
	}
	else{
		k = y;
		i = x;
	}
	
	k = k - 1;
	
	while (k > i ){
		if (k % 2 != 0){
		soma = soma + k;			
		}
		k--;
	}
	
	printf("%d\n", soma);
	
}
