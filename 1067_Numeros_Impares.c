#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		i = 0;
		
	scanf("%d", &x);
		
	for (i = 1; i <= x; i++){
		if (i % 2 != 0){
			printf("%d\n", i);
		}
	}
	
	return 0;
	
}
