#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int t = 0,
		i = 0,
		r1 = 0,
		r2 = 0,
		raio = 0;
		
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d %d", &r1, &r2);
		raio = r1 + r2;
		printf("%d\n", raio);
	}
	
	return 0;
		
}
