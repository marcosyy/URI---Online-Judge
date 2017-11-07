#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0,
		x = 0,
		t = 0,
		n[1000];
		
	scanf("%d", &t);	
	
	do{
		x = t - t;
		while(x < t && i < 1000){
			printf("N[%d] = %d\n", i, x);
			i++;
			x++;
		}
		
	}while(i < 1000);
	
	return 0;
	
}
