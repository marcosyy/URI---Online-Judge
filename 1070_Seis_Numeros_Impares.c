#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x = 0,
		cont = 0;	
	
	scanf("%d", &x);

	while (cont < 6){
		if (x % 2 != 0){
			printf("%d\n", x);
			cont = cont + 1;
		}
		x = x + 1;
	}
	
	return 0;
	
}
