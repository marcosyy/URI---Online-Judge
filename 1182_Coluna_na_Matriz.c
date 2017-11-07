#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double m[12][12],
		   soma = 0;
	int i = 0,
		j = 0,
		c = 0;
	char t;
		
	scanf("%d", &c);
	scanf(" %c", &t);
	
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			scanf("%lf", &m[i][j]);
			if(j == c){
				soma = soma + m[i][j];
			}
		}
	}
	
	if(t == 'S'){
		printf("%.1f\n", soma);
	}
	else{
		printf("%.1f\n", soma / 12);
	}
	
	return 0;
	
}
