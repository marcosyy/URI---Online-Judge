#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		y = 0,
		i = 0,
		k = 0;
		
	scanf("%d %d", &x, &y);
	
	for(i = 1; i <= y; i++){
		if(k <= x){
			printf("%d", i);
			k++;
		}
		if(k != x){
			printf(" ");
		}
		if(k == x){
			printf("\n");
			k = 0;
		}
	}
	
	return 0;
		
}
