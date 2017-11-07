#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		y = 0;
		
	scanf("%d %d", &x, &y);
	
	while (x != y){
		if (x < y){
			printf("Crescente\n");
		}
		else{
			printf("Decrescente\n");
		}
		scanf("%d %d", &x, &y);
	}
	
	return 0;
	
}
