#include <stdio.h>
#include <stdlib.h>

int main(){

	int i = 0,
		j = 0;
	
	for (i = 1; i < 10; i+=2){
		for (j = 7; j > 4; j--){
			printf("I=%d J=%d\n", i, j);
		}
	}
	
	return 0;
	
}
