#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0;
	
	for (i = 1; i <= 100; i++){
		if (i % 2 == 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
	
}
