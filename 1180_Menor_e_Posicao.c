#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int	n = 0,
		i = 0,
		menor,
		pos = 0;
		
	scanf("%d", &n);
	
	int x[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	
	i = 0;
	menor = x[0];
	
	while(i < n){
		if(x[i] <= menor){
			menor = x[i];
			pos = i;
		}
		i++;		
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pos);
	
	return 0;
	
}
