#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i = 0,
		l = 0,
		v = 0,
		maior;
	
	while(scanf("%d", &l) != EOF){
		maior = 0;
		for(i = 0; i < l; i++){
			scanf("%d", &v);
			if(v >= maior){
				maior = v;
			}
		}
		if(maior < 10){
			printf("1\n");
			continue;
		}
		if(maior >= 10 && maior < 20){
			printf("2\n");
			continue;
		}
		if(maior >= 20){
			printf("3\n");
			continue;
		}
	}
	
	return 0;
	
}
