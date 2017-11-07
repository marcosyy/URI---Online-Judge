#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double m[12][12],
		   soma = 0;
	int i = 0,
		j = 0,
		k = 0,
		l = 0,
		cont = 0;
	char o;
	
	scanf(" %c", &o);
	
	k = 7;
	l = 4;
		
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j ++){
			scanf("%lf", &m[i][j]);
			if((i > 6) && (j > l) && (j < k)){
				soma = soma + m[i][j];
				cont = cont + 1;
			}
		}
		if(i > 6){
			k++;
			l--;
		}	
	}
	if(o == 'S'){
		printf("%.1f\n", soma);
	}
	else{
		printf("%.1f\n", soma / cont);
	}
	
	return 0;
}
