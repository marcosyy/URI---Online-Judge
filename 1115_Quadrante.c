#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		y = 0;
		
	scanf("%d %d", &x, &y);
	
	while (x && y != 0){
		if (x > 0 && y > 0){
			printf("primeiro\n");
		}
		if (x < 0 && y > 0){
			printf("segundo\n");
		}
		if (x < 0 && y < 0){
			printf("terceiro\n");
		}
		if (x > 0 && y < 0){
			printf("quarto");
		}
		scanf("%d %d", &x, &y);
	}
	
	return 0;
	
}
