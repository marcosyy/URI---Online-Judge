#include <stdio.h>
#include <stdlib.h>
#define T 12


int main(){
	
	char O;
	
	double soma = 0,
		   m[T][T];
	
	int l = 0,
		c = 0,
		cont = 0;
	
	
	scanf(" %c", &O);
	
	for(l = 0; l < T; l++){
		for(c = 0; c < T; c++){
			scanf("%lf", &m[l][c]);
			
			if(l <= 5 && l - c >= 1){
				soma += m[l][c];
				cont++;				
			}
			
			if(l >= 6 && l + c <= 10){
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
