#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int distancia = 0,
		tempo = 0;
		
	scanf("%d", &distancia);
	
	tempo = (60 * distancia) / 30;
	
	printf("%d minutos\n", tempo);
	
	return 0;
	
}
