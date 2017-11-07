#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		y = 0,
		i = 0,
		soma = 0;
		
	scanf("%d %d", &x, &y);
	
	if (x > y){
		for (i = y; i <= x; i++){
			if (y % 13 != 0){
				soma = soma + y;
			}
			y++;
		}
	}	
	else{
		if (x < y){
			for (i = x; i <= y; i++){
				if (x % 13 != 0){
					soma = soma + x;
				}
				x++;
			}
		}
		if (x == y){
			if (x % 13 != 0){
				soma = soma + x;
			}
		}
	}
	
	printf("%d\n", soma);
	
	return 0;
	
}
