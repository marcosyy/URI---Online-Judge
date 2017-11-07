#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double m[12][12],
		   soma = 0,
		   media = 0;
	int i = 0,
		k = 0,
		l = 0;
	char t;
	
	scanf("%d", &l);
	scanf(" %c", &t);
	
	for(i = 0; i < 12; i++){
		for(k = 0; k < 12; k++){
			scanf("%lf", &m[i][k]);
			if(i == l){
				soma = soma + m[i][k];
			}
		}
	}
	media = soma / 12;
	
	if(t == 'S'){
		printf("%.1f\n", soma);
	}
	else{
		printf("%.1f\n", media);
	}

	return 0;
	
}
