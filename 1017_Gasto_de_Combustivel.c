#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tempo = 0,
		velocidade = 0,
		distancia = 0;
		
	double litros = 0;
		
		scanf("%d", &tempo);
		scanf("%d", &velocidade);
		
		distancia = tempo * velocidade;
		
		litros = (distancia / 12.0);
		
		printf("%.3f\n", litros);
		
		return 0;
			
}
