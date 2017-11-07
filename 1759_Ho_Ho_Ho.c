#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char ho[2] = "Ho";
	int i = 0,
		n = 0;

	scanf("%d", &n);
	
	for(i = n; i >= 1; i--){
		if(i > 1){
			printf("%c%c ", ho[0], ho[1]);
		}
		if(i == 1){
			printf("%c%c!\n", ho[0], ho[1]);
		}
	}
	
	return 0;
	
}
