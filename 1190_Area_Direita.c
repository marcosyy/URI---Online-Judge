#include <stdio.h>
#include <stdlib.h>
#define T 12

int main(){
	
	char O;
	
	double m[T][T],
		   soma = 0;
		   
	int l = 0,
		c = 0,
		cont = 0;
		
	scanf(" %c", &O);
	
	for(l = 0; l < T; l++){
		for(c = 0; c < T; c++){
			scanf("%lf", &m[l][c]);
			
			if(l <= 5 && l + c >= 12){
				soma += m[l][c];
				cont++;
			}
			if(l >= 6 && c - l >= 1){
				soma += m[l][c];
				cont++;
			}			
		}
	}
	
	if(O == 'S'){
		printf("%.1f\n", soma);
	}
	else{
		printf("%.1f\n", soma / cont);
	}
	
	return 0;
		
}
