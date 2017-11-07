#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0,
		j = 0;
		
	for (i = 1; i < 10; i+=2){
		for (j = i + 6; j > i + 3; j--){
			printf("I=%d J=%d\n", i, j);
		}
	}
	
	return 0;

}
