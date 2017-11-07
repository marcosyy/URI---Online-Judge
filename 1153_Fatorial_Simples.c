#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0,
		fat = 0;
		
	scanf("%d", &n);
	
	fat = n;
	
	for(i = n - 1; i > 0; i--){
		fat = fat * i;
	}
	
	printf("%d\n", fat);
	
	return 0;
	
}
