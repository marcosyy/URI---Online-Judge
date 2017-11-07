#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int M = 0,
	    N = 0,
	    i = 0,
	    j = 0;
	    
	long long int soma = 0,
		        fatM = 1,
		        fatN = 1;
	
	while(scanf("%d %d", &M, &N) != EOF){
	
		for(i = M; i >=1 ; i--){
			fatM = fatM * i;
		}
	
		for(j = N; j >= 1; j--){
			fatN = fatN * j;
		}
		
		soma = fatM + fatN;
		
		fatM = fatN = 1;
		
		printf("%d\n", soma);

	}
	
	return 0;

}
