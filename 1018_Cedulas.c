#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int valor = 0,
		aux = 0,
		i = 0,
		notas[7] = {100, 50, 20, 10, 5, 2, 1},
		qtd[7];
	
	scanf("%d", &valor);	
	printf("%d\n", valor);
	
	for (i = 0; i < 7; i++){
		aux = valor / notas[i];
		valor = valor % notas[i];
		qtd[i] = aux;
	}
	
	printf("%d nota(s) de R$ 100,00\n", qtd[0]);
	printf("%d nota(s) de R$ 50,00\n", qtd[1]);
	printf("%d nota(s) de R$ 20,00\n", qtd[2]);
	printf("%d nota(s) de R$ 10,00\n", qtd[3]);
	printf("%d nota(s) de R$ 5,00\n", qtd[4]);
	printf("%d nota(s) de R$ 2,00\n", qtd[5]);
	printf("%d nota(s) de R$ 1,00\n", qtd[6]);
	
	return 0;
	
}
