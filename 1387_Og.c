#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int L = 0,
	 	R = 0;
	
	while((scanf("%d ", &L) != 0) && scanf("%d", &R) != 0){
		if(L == 0 && R == 0){
			break;
		}
		else{
			printf("%d\n", L + R);
		}
	}
	
	return 0;
	
}
