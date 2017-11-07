#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int	i = 0,
		k = 0,
		maior = 0,
		n[100],
		p = 0;
	
	for (i = 0; i < 10; i++){
		scanf("%d", &n[i]);		
	}
	
	for (i = 0; i < 10; i++){
		for (k = 1; k < 10; k++){
			if (n[i] > n[k] && maior < n[i]){
				maior = n[i];
				p = i + 1;
			}
		}
	}
	
	printf("%d\n", maior);
	printf("%d\n", p);
	
	return 0;
	
}
