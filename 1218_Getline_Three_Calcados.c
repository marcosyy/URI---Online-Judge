#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int	tam = 0,
		contIguais = 0,
		contM = 0,
		contF = 0,
		k = 0,
		x = 0;
			
	char caixa[10000],
		 chNum[3];
	
	//Le o nº do calcado
	while(scanf("%s\n", chNum) != EOF){
		
		//Incremento da quantidade de casos
		x++;
		
		//Le o nº de cada par que esta na caixa seguido de M ou F
		fgets(caixa, 9999, stdin);
		
		//Recebe o tamanho do vetor
		tam = strlen(caixa);
		
		//Incrementa 1 ao tamanho para considerar o caracter \0
		tam += 1;
		
		//Faz a contagem da qtde de pares iguais conf. o tipo M ou F
		while(k <= tam){
			if(chNum[0] == caixa[k] && chNum[1] == caixa[k + 1]){
				contIguais++;
				if(caixa[k + 3] == 'M'){
					contM++;
				}
				else{
					contF++;
				}
			}
			k += 5;
		}
		
		//Pula linha apos 2 casos de usos terem sidos digitados
		if(x != 1){
			printf("\n");
		}		
		
		//Impressao dos dados de saida
		printf("Caso %d:\n", x);
		printf("Pares Iguais: %d\n", contIguais);
		printf("F: %d\n", contF);
		printf("M: %d\n", contM);	
		
		//Retorno de valores iniciais
		k = 0;
		tam = 0;
		contIguais = 0;
		contM = 0;
		contF = 0;		
	}
	
	return 0;
	
}
