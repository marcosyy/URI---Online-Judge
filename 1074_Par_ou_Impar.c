#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0,
		k = 0;
		
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		scanf("%d", &k);
		if (k % 2 == 0){
			if (k > 0){
				printf("EVEN POSITIVE\n");
			}
			else{
				if (k < 0){
					printf("EVEN NEGATIVE\n");
				}
			}
		}
		else{
			if (k > 0){
				printf("ODD POSITIVE\n");
			}
			else{
				if (k < 0){
					printf("ODD NEGATIVE\n");
				}
			}	
		}
		if (k == 0){
			printf("NULL\n");
		}
	}	
	
	return 0;
		
}
