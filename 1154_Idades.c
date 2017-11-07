#include <stdio.h>
#include <stdlib.h>

int main(){

	int id = 0,
		cont = 0;
	double media = 0;
	
	while(id >= 0){
		scanf("%d", &id);
		if(id < 0){
			break;
		}
		media = media + id;
		cont++;
	}
	media = media / cont;
	
	printf("%.2f\n", media);
	
	return 0;
	
}
