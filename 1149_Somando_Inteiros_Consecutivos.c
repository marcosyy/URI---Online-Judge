#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a = 0,
		n = 0,
		i = 0, 
		soma = 0;
		
	scanf("%d %d", &a, &n);
	
	while(n <= 0){
		scanf("%d", &n);
	}
	
	for(i = a; i < a + n; i++){
		soma = soma + i;
	}
	
	printf("%d\n", soma);
	
	return 0;
		
}
