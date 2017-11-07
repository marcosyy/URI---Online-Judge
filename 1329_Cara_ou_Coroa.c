#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int n = 0,
		i = 0,
		r = 0,
		contMary = 0,
		contJohn = 0;
	
	do{
		scanf("%d", &n);
			if(n == 0){
				break;
			}
			for(i = 0; i < n; i++){
				scanf("%d", &r);
				if(r == 0){
					contMary++;
				}
				else{
					contJohn++;
				}
			}
			printf("Mary won %d times and John won %d times\n", contMary, contJohn);
			contMary = 0;
			contJohn = 0;
	}while(n >= 1);
		
	return 0;
	
}
