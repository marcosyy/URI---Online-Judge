#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double n[6],
		   media = 0,
		   soma = 0;
	int i = 0,
		cont = 0;
	
	for (i = 0; i < 6; i++){
		scanf("%lf", &n[i]);
		if (n[i] > 0){
			cont = cont + 1;
			soma = soma + n[i];		
		}	
	}
	
	media = soma / cont;	
	
	printf("%d valores positivos\n", cont);
	printf("%.1f\n", media);
	
	return 0;
	
}
