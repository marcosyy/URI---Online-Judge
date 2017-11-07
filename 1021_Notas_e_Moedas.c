#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double valor = 0,
		   valores[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
	int x = 0,
		y = 0,
		i = 0,
		k = 0,
		valorInt = 0,
		valorRest = 0,
		dinheiro[12] = {100, 50, 20, 10, 5, 2, 1, 50, 25, 10, 5, 1},
		qtde[12];
		
		scanf("%lf", &valor);
		valorInt = valor;
		valorRest = (valor - valorInt) * 100;
				
		for (i = 0; i < 7; i++){
			x = valorInt / dinheiro[i];
			y = valorInt % dinheiro[i];
			valorInt = y;
			qtde[i] = x;
		}

		for (k = 7; k < 12; k++){
			x = valorRest / dinheiro[k];
			y = valorRest % dinheiro[k];
			valorRest = y;
			qtde[k] = x;
		}
		
		printf("NOTAS:\n");
		for (i = 0; i < 6; i++){
			printf("%i nota(s) de %.2f\n", qtde[i], valores[i]);
		}
		
		printf("MOEDAS:\n");
		for (k = 6; k < 12; k++){
			printf("%i moeda(s) de %.2f\n", qtde[k], valores[k]);
			
		}
		
		return 0;			
}
