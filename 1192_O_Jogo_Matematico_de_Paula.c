#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	char jogo[4];
	int numJogo[3],
	    num[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57},
	    i = 0,
	    k = 0,
	    t = 0,
	    j = 0,
	    n1 = 0,
	    n2 = 0,
	    result = 0;
	
	//Leitura da qtde de caso de teste    
	scanf("%d", &t); 
	
	//Testes
	for(i = 0; i < t; i++){
		
		//Leitura dos 3 caracteres
		scanf("%s", jogo); 
		
		//Armazena o nº referencial (tabela ASCII) dos caracteres
		while(jogo[k] != '\0'){ 
			numJogo[k] = jogo[k];
			k++;
		}
		k = 0;
		
		//Busca no vetor num[] qual o nº do indice correspondente, no caso os números de 0 a 9
		for(k = 0; k < 3; k += 2){
			for(j = 0; j < 11; j++){
				if(numJogo[k] == num[j] && k == 0){
					n1 = j;
				}
				else{
					if(numJogo[k] == num[j]){
						n2 = j;
					}
				}
			}
		}
		k = 0;
		j = 0;
		
		//Efetua os calculos conf. as regras
		if(n1 == n2){
			result = n1 * n2;
		}
		else{
			if(numJogo[1] <= 90){
				result = n2 - n1;
			}
			if(numJogo[1] > 90){
				result = n1 + n2;
			}	
		}
		
		//Imprime resultado
		printf("%d\n", result);						
	}
	
	return 0;
		
}
