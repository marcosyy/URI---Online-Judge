#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		i = 5,
		soma = 0;
		
	do{
		scanf("%d", &x);
		if(x == 0){
			break;
		}
		while(i != 0){
			if(x % 2 == 0){
				soma = soma + x;
				i--;
			}
			x++;
		}
		printf("%d\n", soma);
		soma = 0;
		i = 5;
		
	}while(x != 0);
	
	return 0;
	
}
