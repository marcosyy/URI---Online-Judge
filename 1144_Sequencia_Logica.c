#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0,
		num = 1;
		
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		printf("%d %d %d\n", num, num * num, num * num * num);
		printf("%d %d %d\n", num, num * num + 1, num * num * num + 1);
		num++;
	}
	
	return 0;
	
}
